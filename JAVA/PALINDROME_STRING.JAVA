import java.util.Scanner;

public class PalindromeString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter The String : ");
        String s = sc.next();

        int start = 0;
        int end = s.length() - 1;
        boolean isPalindrome = true;

        while (start < end) {
            if (s.charAt(start) != s.charAt(end)) {
                isPalindrome = false;
                break;
            }
            start++;
            end--;
        }

        if (isPalindrome)
            System.out.println("String is Palindrome");
        else
            System.out.println("String is Not Palindrome");

        sc.close();
    }
}
