import java.util.*;
import java.io.*;

public class PrgSix {
    public static void main(String[] args){
    System.out.println("enter a string to check the number of vowels in it");
    Scanner scan = new Scanner(System.in);
    String s = scan.nextLine();
    char ar[]=s.toCharArray();
    int count = 0;
    for(int i=0;i<ar.length;i++){
        if(ar[i]=='a'||ar[i]=='e'||ar[i]=='i'||ar[i]=='o'||ar[i]=='u'){
            count=count+1;
        }
    }
    System.out.println("The number of vowels in given string are " +count);
   }
}