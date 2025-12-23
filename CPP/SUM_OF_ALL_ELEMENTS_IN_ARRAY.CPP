#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of the Array : ";
    cin >> n;
    int arr[n], i, sum = 0;

    cout << "Enter Array Elements : " << endl;
    for (i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i <= n - 1; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The Sum of All the Array Elements is " << sum;
    return 0;
}