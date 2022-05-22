#include<iostream>
using namespace std;

// Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 

void leftrotatebyone(int A[], int n){

    int temp = A[0];

    for (int i = 0; i < n; i++)
    {
        A[i] = A[i+1];
        A[n] = temp;
    }
    
}

void leftrotate(int A[], int n, int d){
    for (int i = 0; i < d; i++)
    {
        
        leftrotatebyone(A,n);
    }
    
}

void printArray(int A[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    
}

int main(){

    int n = 8;
    int A[n] = {1, 2, 3, 4, 5, 6, 7, 8};
    int d = 2;

    leftrotate(A,n,d);
    printArray(A,n);



    return 0;
}