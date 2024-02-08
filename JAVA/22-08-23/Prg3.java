import java.util.*;
public class Prg3 {
  public static void main(String[] args) 
  {
    Integer a[] = new Integer[]{2, 5, 15, 7, 55, 4, 90};
    int k = 2;
		System.out.println("Original Array: ");
		System.out.println(Arrays.toString(a));
		System.out.println("K'th smallest element of array is:");
    Arrays.sort(a);       		
    System.out.print(a[k-1] + " \n");
		System.out.println("K'th largest element of array is: ");          
    Arrays.sort(a, Collections.reverseOrder());  		
    System.out.print(a[k-1] + " ");
	}
}