#include "ThingSpeak.h"
#include <ESP8266WiFi.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#include <Wire.h>
#include <ADXL345.h>
#include "DHT.h"

#define DHTPIN D5     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);


ADXL345 adxl; //variable adxl is an instance of the ADXL345 library



LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display


String beatAvg;

char ssid[] = "honor";   // your network SSID (name) 
char pass[] = "123456789";   // your network password
int keyIndex = 0;            // your network key Index number (needed only for WEP)
WiFiClient  client;
unsigned long myChannelNumber = 1759101;
const char * myWriteAPIKey = "AB395VYH9POJ57NI";


String myStatus = "";

void setup()
{
  pinMode(D3,INPUT);
  Serial.begin(115200);
  
    lcd.begin();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Patient 1 Health");
  lcd.setCursor(0, 1);
  lcd.print("Monitoring System");
  delay(1000);
WiFi.mode(WIFI_STA); 
  ThingSpeak.begin(client);  // Initialize ThingSpeak
  Serial.println("Initializing...");
pinMode(D8,INPUT);
pinMode(D7,INPUT);
adxl.powerOn();

  //set activity/ inactivity thresholds (0-255)
  adxl.setActivityThreshold(75); //62.5mg per increment
  adxl.setInactivityThreshold(75); //62.5mg per increment
  adxl.setTimeInactivity(10); // how many seconds of no activity is inactive?
 
  //look of activity movement on this axes - 1 == on; 0 == off 
  adxl.setActivityX(1);
  adxl.setActivityY(1);
  adxl.setActivityZ(1);
 
  //look of inactivity movement on this axes - 1 == on; 0 == off
  adxl.setInactivityX(1);
  adxl.setInactivityY(1);
  adxl.setInactivityZ(1);
 
  //look of tap movement on this axes - 1 == on; 0 == off
  adxl.setTapDetectionOnX(0);
  adxl.setTapDetectionOnY(0);
  adxl.setTapDetectionOnZ(1);
 
  //set values for what is a tap, and what is a double tap (0-255)
  adxl.setTapThreshold(50); //62.5mg per increment
  adxl.setTapDuration(15); //625us per increment
  adxl.setDoubleTapLatency(80); //1.25ms per increment
  adxl.setDoubleTapWindow(200); //1.25ms per increment
 
  //set values for what is considered freefall (0-255)
  adxl.setFreeFallThreshold(7); //(5 - 9) recommended - 62.5mg per increment
  adxl.setFreeFallDuration(45); //(20 - 70) recommended - 5ms per increment
 
  //setting all interrupts to take place on int pin 1
  //I had issues with int pin 2, was unable to reset it
  adxl.setInterruptMapping( ADXL345_INT_SINGLE_TAP_BIT,   ADXL345_INT1_PIN );
  adxl.setInterruptMapping( ADXL345_INT_DOUBLE_TAP_BIT,   ADXL345_INT1_PIN );
  adxl.setInterruptMapping( ADXL345_INT_FREE_FALL_BIT,    ADXL345_INT1_PIN );
  adxl.setInterruptMapping( ADXL345_INT_ACTIVITY_BIT,     ADXL345_INT1_PIN );
  adxl.setInterruptMapping( ADXL345_INT_INACTIVITY_BIT,   ADXL345_INT1_PIN );
 
  //register interrupt actions - 1 == on; 0 == off  
  adxl.setInterrupt( ADXL345_INT_SINGLE_TAP_BIT, 1);
  adxl.setInterrupt( ADXL345_INT_DOUBLE_TAP_BIT, 1);
  adxl.setInterrupt( ADXL345_INT_FREE_FALL_BIT,  1);
  adxl.setInterrupt( ADXL345_INT_ACTIVITY_BIT,   1);
  adxl.setInterrupt( ADXL345_INT_INACTIVITY_BIT, 1);

  dht.begin();
}

void loop()
{
  if(WiFi.status() != WL_CONNECTED){
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    while(WiFi.status() != WL_CONNECTED){
      WiFi.begin(ssid, pass);  // Connect to WPA/WPA2 network. Change this line if using open or WEP network
      Serial.print(".");
      delay(5000);     
    } 
    Serial.println("\nConnected.");
  }
  
 
  //Boring accelerometer stuff   
  int x,y,z;  
  adxl.readXYZ(&x, &y, &z); //read the accelerometer values and store them in variables  x,y,z
  // Output x,y,z values 
  Serial.print("values of X , Y , Z: ");
  Serial.print(x);
  Serial.print(" , ");
  Serial.print(y);
  Serial.print(" , ");
  Serial.println(z);
  int hrv;

hrv=analogRead(A0);
 Serial.println("HRV Value:"+String(hrv));
 float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);
    if(Serial.available()>0){
      beatAvg=Serial.readString();
      }
 int bhb=analogRead(D3)*3.5;
 int hbhb=bhb-10;
 Serial.println(bhb);
  if(t>40){
 
  lcd.begin();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Alert High");
  lcd.setCursor(0, 1);
  lcd.print("Temperature ");
  delay(1000);
}
if(t<20){
  lcd.begin();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Alert Low");
  lcd.setCursor(0, 1);
  lcd.print("Temperature");
  delay(1000);
}

if(bhb > 100){
  lcd.begin();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Alert High");
  lcd.setCursor(0, 1);
  lcd.print("Heart Rate");
  delay(1000);
}
lcd.begin();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("T"+String(t)+" H:"+String(bhb)+" E:"+String(hrv));
  lcd.setCursor(0, 1);
  lcd.print("X:"+String(x)+" Y:"+String(y)+" Z:"+String(z));
  delay(1000);
 //if (irValue > 50000)
   // {//Serial.print(" No finger?");
      ThingSpeak.setField(1, t);
  ThingSpeak.setField(2, bhb);
  ThingSpeak.setField(3, hbhb);
ThingSpeak.setField(4, hrv);

  
  
  ThingSpeak.setStatus(myStatus);
  
  // write to the ThingSpeak channel
  int x1 = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
  if(x1 == 200){
    Serial.println("Channel update successful.");
  }
  else{
    Serial.println("Problem updating channel. HTTP error code " + String(x));
  }
  
  delay(5000); // Wait 20 seconds to update the channel again

    
    //}

  Serial.println();


}
