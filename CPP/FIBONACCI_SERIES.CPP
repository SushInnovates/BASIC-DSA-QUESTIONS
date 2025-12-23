#include <iostream>
using namespace std;
int main()
{
    int n, i, n1 = 0, n2 = 1, n3;
    cout << "Enter A Number : ";
    cin >> n;

    if (n >= 1)
        cout << n1 << " ";
    if (n >= 2)
        cout << n2 << " ";

    for (i = 3; i < n; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
