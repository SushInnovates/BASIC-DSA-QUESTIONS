import java.util.Scanner;

public class MaxInArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("ENTER SIZE OF THE ARRAY : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("ENTER ARRAY ELEMENTS : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int MAX = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] > MAX) {
                MAX = arr[i];
            }
        }

        System.out.println("MAXIMUM ELEMENT : " + MAX);
        sc.close();
    }
}
