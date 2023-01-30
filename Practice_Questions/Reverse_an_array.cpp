#include<bits/stdc++.h>
using namespace std;
void reverseArray(int *arr,int n){
    int s = 0;
    int e = n - 1;
    while(s<e)
    {
        swap(arr[s++],arr[e--]);
        // s++;
        // e--;
    }
    // int temp;
    // while(s<e){
    //     temp = arr[s];
    //     arr[s]=arr[e];
    //     arr[e]=temp;
    //     s++;
    //     e--;
    // }
}

void printArray(int *arr, int n ){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int main()
{

    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    //int arr[10];
    cout<<"Enter the element of an array"<<endl;
    int *arr = new int[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];//*(arr + i)
    }

    cout<<"Your Array is " <<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";//*(arr + i)
    }cout<<endl;

    reverseArray(arr,n);

    cout<<"Reverse of an array is" <<endl;
    
    printArray(arr,n);

    return 0;
}