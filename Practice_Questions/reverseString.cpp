#include<bits/stdc++.h>
using namespace std;

string reverseString(string s){
    int n = s.length();

    for(int i = 0; i < n/2 ;i++){
        swap(s[i],s[n-i-1]);
    }
    return s;

}

int main()
{
    string s;
    cout<<"Enter your string you want to reverse : ";
    cin>>s;

    cout<<"Reverse of an string is : " <<reverseString(s)<<endl;
}