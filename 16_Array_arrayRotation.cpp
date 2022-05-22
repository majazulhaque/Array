#include<iostream>
using namespace std;

// Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements

void reverse(int arr[], int start, int end){

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void leftrotate(int arr[], int n, int d){

    if (d == 0)
    {
        return;
    }
    reverse(arr,0, d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    
    
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){

    int n,d;
    cin>>n>>d;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    leftrotate(arr, n, d);
    printArray(arr,n);
    



    return 0;
}