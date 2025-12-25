#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter The String : ";
    cin>>s;
    bool isPalindrome = true;
    int start = 0;
    int end = s.length()-1;
    while(start < end){
        if(s[start]!=s[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome)
    {
        cout<<"String is Palindrome";
    }else{
        cout<<"String is Not Palindrome";
    }
    return 0;
}