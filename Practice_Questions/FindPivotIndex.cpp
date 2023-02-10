#include<iostream>
using namespace std;

int pivotIndex(int arr[], int n){

    int totalSum = 0;
    int leftSum = 0;
    int rightSum;
    int result = -1;
    for(int i = 0; i < n; i++){
        totalSum += arr[i];
    }

    for(int i = 0; i < n; i++){
        rightSum = totalSum-leftSum-arr[i];

        if(leftSum == rightSum){
            result = i;
            break;;
        }
        leftSum += arr[i];
    }
    return result;
}

int main()
{

    int arr[] = {2,1,-1};

    int ans = pivotIndex(arr,3);

    cout<<ans<<endl;

    return 0;
}