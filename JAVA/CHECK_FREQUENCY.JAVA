import java.util.HashMap;
import java.util.Scanner;

public class FrequencyOfElements {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Size of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Array Elements : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        HashMap<Integer, Integer> frequency = new HashMap<>();

        for (int i = 0; i < n; i++) {
            frequency.put(arr[i], frequency.getOrDefault(arr[i], 0) + 1);
        }

        for (int key : frequency.keySet()) {
            System.out.println(key + " ---> " + frequency.get(key));
        }

        sc.close();
    }
}
