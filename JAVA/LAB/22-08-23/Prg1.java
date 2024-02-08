import java.util.*;
public class Prg1 {

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		long min;
		int year,days;
		char ch;

		do{
		
		System.out.println("enter minutes: ");
		min = sc.nextLong();

		year=(int)min/(12*30*24*60);
    	days=(int)min/(24*60);

    	System.out.println(year);
    	System.out.println(days);

    	System.out.println("press 'y' to continue...");
    	ch = sc.next().charAt(0);

         }while(ch=='y');
        System.out.println("THE END");
    }
}