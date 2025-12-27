import java.util.Scanner;

public class PrimeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter A Number : ");
        n = sc.nextInt();

        if (n <= 1) {
            System.out.println("Not a Prime Number");
            sc.close();
            return;
        }

        boolean isPrime = true;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            System.out.println("Its a Prime Number");
        } else {
            System.out.println("Its Not a Prime Number");
        }

        sc.close();
    }
}
