#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    if (n < 0) {
        cout << "Number is Not Palindrome";
        return 0;
    }

    int temp = n, rev = 0, rem;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (temp == rev)
        cout << "Number is Palindrome";
    else
        cout << "Number is Not Palindrome";

    return 0;
}
