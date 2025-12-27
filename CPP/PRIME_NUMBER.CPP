#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter A Number : ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Not a Prime Number ";
        return 0;
    }
    bool isPrime = true;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Its a Prime Number ";
    }
    else
    {
        cout << "Its Not a Prime Number ";
    }
    return 0;
}
