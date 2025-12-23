import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        int n;
        long fact = 1;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number : ");
        n = sc.nextInt();

        if (n <= 0) {
            System.out.println("Factorial of " + n + " is not possible");
            return;
        }

        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }

        System.out.println("Factorial of " + n + " is " + fact);
        sc.close();
    }
}
