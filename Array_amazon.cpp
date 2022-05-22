#include<iostream>
#include<climits>
using namespace std;
 
// Given an array arr[] pf size N. The task is to find the first repeating element in the way of integers, i.e., an element that occurs
// more than once and whose index of first occurrence is smallest.

int main(){

    int n;
    cin>>n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    const int N = 20;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minIdx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[A[i]] != -1)
        {
            minIdx = min(minIdx,idx[A[i]]);
        }
        else{
            idx[A[i]] = i;
        }
        
    }
    if (minIdx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<minIdx+1<<endl;
    }
    
    
    
    

    return 0;
}
