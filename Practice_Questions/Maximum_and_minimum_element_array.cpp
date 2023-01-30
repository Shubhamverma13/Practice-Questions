#include<bits/stdc++.h>
using namespace std;

int getMax(int *arr, int n){
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}

int getMin(int *arr, int n){
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int main()
{
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;
    int *arr = new int[n];

    for(int i = 0 ; i < n; i++){
        cin>>*(arr+i);
    }
    cout<<"Maximum element of an array is : "<<getMax(arr,n)<<endl;
    cout<<"Minimum element of an array is : "<<getMin(arr,n)<<endl;



}