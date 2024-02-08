import java.util.*;
import java.io.*;


public class PrgFive{
    public static void main(String[] args) {
        System.out.println("enter a string to check whether its a palindrome or not");
        Scanner scan=new Scanner(System.in);
        String s=scan.nextLine();
        int length=s.length();
        // System.out.println(s.sort());

        char ar[]=s.toCharArray(); //converting a string to an array
        
        
        for(int i=0;i<length/2;i++){
            if(ar[i]!=ar[length-1-i]){
                System.out.println("not a palindrome");
                System.exit(0);
            }
        }
        System.out.println("is a palindrome");
        
    }
}