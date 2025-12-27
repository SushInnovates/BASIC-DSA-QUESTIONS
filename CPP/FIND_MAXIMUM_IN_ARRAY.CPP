#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE OF THE ARRAY : ";
    cin>>n;
    int arr[n],i;
    cout<<"ENTER ARRAY ELEMENTS : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int MAX = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>MAX){
            MAX = arr[i];
        }
    }
    cout<<"MAXIMUM ELEMENT : "<<MAX;
    return 0;
}