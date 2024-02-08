//Write a program to glow led at P0 and delay for various pins.
#include<LPC214x.h>
void delay(void)
  {
		int i;
    for(i=0;i<5000000;i++);
	}
int main()
{
	IODIR0 = 0XFFFFFFFF; //port 0 as output
	while(1){
		IOSET0 = 0xFFFFFFFF; // all pins in port0 is glowing
		delay();
		IOCLR0 = 0xFFFFFFFF; // all pins in port0 is not glowing
		delay();
	}
}
