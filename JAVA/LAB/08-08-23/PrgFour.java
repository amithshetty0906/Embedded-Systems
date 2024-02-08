import java.util.*;
import java.io.*;


public class PrgFour{
    public static void main(String[] args) {
        System.out.println("enter a string to get it sorted");
        Scanner scan=new Scanner(System.in);
        String s=scan.nextLine();
        int length=s.length();
        // System.out.println(s.sort());

        char ar[]=s.toCharArray(); //converting an string to array
        //Arrays.sort(ar); inbuilt function to sort an array

        //sorting an array using bubble sort
        for(int i=0;i<length-1;i++){
            for (int j=0;j<length-1;j++) {
                if(ar[j]>ar[j+1]){
                    //swapping elements
                    char temp=ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=temp;
                }
            }
        }
        //printing an array using for loop
        // for(int i=0;i<length;i++){
        //     System.out.print(ar[i]);
        // }
        // System.out.println(Arrays.toString(ar));

        String sorted = new String(ar);//creating a new string using char array
        System.out.println(ar);
        System.out.println(length);
    }
}