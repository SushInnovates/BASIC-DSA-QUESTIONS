import java.util.Scanner;

public class PalindromeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a Number : ");
        int n = sc.nextInt();

        if (n < 0) {
            System.out.println("Number is Not Palindrome");
            sc.close();
            return;
        }

        int temp = n, rev = 0;

        while (n > 0) {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }

        if (temp == rev)
            System.out.println("Number is Palindrome");
        else
            System.out.println("Number is Not Palindrome");

        sc.close();
    }
}
