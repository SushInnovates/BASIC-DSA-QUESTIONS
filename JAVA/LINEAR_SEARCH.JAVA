import java.util.Scanner;

public class LinearSearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Size of the Array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        int key;
        int flag = 0;

        System.out.println("Enter Array Elements : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter The Element You Would like to Search in this Array : ");
        key = sc.nextInt();

        for (int i = 0; i < n; i++) {
            if (key == arr[i]) {
                System.out.println("Element Found at index " + i);
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            System.out.println("Element Not Found!");
        }

        sc.close();
    }
}
