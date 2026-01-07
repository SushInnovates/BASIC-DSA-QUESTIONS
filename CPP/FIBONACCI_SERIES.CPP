#include <iostream>
using namespace std;
int main()
{
    int n, i, first = 0, second = 1, next;
    cout << "Enter A Number of Terms : ";
    cin >> n;

    if (n >= 1)
        cout << first << " ";
    if (n >= 2)
        cout << second << " ";

    for (i = 3; i < n; i++)
    {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout<<endl;
    return 0;
}

