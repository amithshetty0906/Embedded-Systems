import java.util.*;
public class Prg4{
  public static void main(String[] args){
    Integer num[] = new Integer[]{2, 4, 16, 8, 55, 50, 10};
    int sum = 0;
    System.out.println("Array is : ");
	  System.out.println(Arrays.toString(num));
    for(int i=0;i<num.length;i++) {
      sum = sum + num[i];
    }
      double average = sum / num.length;
      System.out.println("The average of array is: " + average);
      System.out.println("The numbers in array greater than the average are: ");
      for(int i = 0; i<num.length;i++) {
      if(num[i] > average) {
        System.out.println(num[i]);
      }
    }
	}
}