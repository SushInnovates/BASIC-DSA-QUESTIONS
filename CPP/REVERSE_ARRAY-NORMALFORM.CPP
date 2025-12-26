#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The size of the Array : ";
    cin >> n;
    int arr[n], i;
    cout << "Enter Array Elements : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array Elements : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nReversed Array : " << endl;
    for (i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
