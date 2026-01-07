#include <iostream>
using namespace std;
int main()
{
    int n, i;
    long long fact = 1;
    cout << "Enter Number : ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial of negative number is not possible";
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is " << fact;
    return 0;

}
