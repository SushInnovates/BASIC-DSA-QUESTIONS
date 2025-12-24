#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of the Array : ";
    cin >> n;
    int arr[n], key, i, flag = 0;
    cout << "Enter Array Elements : " << endl;
    for (i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter The Element You Would like to Search in this Array : ";
    cin >> key;

    for (i = 0; i <= n - 1; i++)
    {
        if (key == arr[i])
        {
            cout << "Element Found at index " << i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element Not Found!";
    }
    return 0;
}