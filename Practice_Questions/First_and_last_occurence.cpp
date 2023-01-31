#include<iostream>
using namespace std;

int lastOcc(int *arr, int n, int key){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s) / 2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        } else if(key > arr[mid]){
            s = mid + 1;

        } else if (key < arr[mid]) {
            e = mid - 1;
        }
        mid = s + (e-s) / 2;
    }
    return ans;
}

int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //int arr[8] = {0,0,1,1,2,2,2,2};
    int ans = firstOcc(arr,n,2);
    int ans1 = lastOcc(arr,n,2);

    cout<<"First occurence is : " << ans<<endl;;
    cout<<"last occurenece is : " << ans1;
}