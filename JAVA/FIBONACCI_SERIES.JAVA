import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        int n, i;
        int n1 = 0, n2 = 1, n3;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter A Number : ");
        n = sc.nextInt();

        if (n >= 1)
            System.out.print(n1 + " ");
        if (n >= 2)
            System.out.print(n2 + " ");

        for (i = 3; i < n; i++) {
            n3 = n1 + n2;
            System.out.print(n3 + " ");
            n1 = n2;
            n2 = n3;
        }

        sc.close();
    }
}
