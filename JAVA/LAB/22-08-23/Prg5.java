public class Prg5 {
    public static void main(String[] args) {
        int[] a= {-3,10,-12,8,25,-11};

        movePositiveandNegativ(a);

        System.out.print("Modified Array: ");
        for (int num : a) {
            System.out.print(num + " ");
        }
    }

    public static void movePositiveandNegativ(int[] a) {
        int left = 0; 
        int right = a.length - 1; 

        while (left <= right) {
         
            while (left <= right && a[left] < 0) {
                left++;
            }

          
            while (left <= right && a[right] >= 0) {
                right--;
            }

           
            if (left <= right) {
                int temp = a[left];
                a[left] = a[right];
                a[right] = temp;
                left++;
                right--;
            }
        }
    }
}