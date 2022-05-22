#include<iostream>
using namespace std;

// Given an array A[] if size n.Output sum of each subarray of the given array.

int main(){

    int n;
    cin>>n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    int current= 0;

    for (int i = 0; i < n; i++)
    {
        current = 0;
        for (int j = i; j < n; j++)
        {
            current += A[j];
            cout<<current<<endl;
        }
        
    }
    
    return 0;
}