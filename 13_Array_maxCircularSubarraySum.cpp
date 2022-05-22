#include<iostream>
#include<climits>
using namespace std;

// Find the  circular subarray of an array which has maximum sum.

int kadane(int A[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += A[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
        
    }

    return maxSum;
    
}


int main(){

    int n;
    cin>>n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    int wrapSum;
    int nonwrapSum;
    int totalSum = 0;
    
    nonwrapSum = kadane(A,n);

    for (int i = 0; i < n; i++)
    {
        totalSum += A[i];
        A[i] = -A[i];
    }

    wrapSum = totalSum + kadane(A,n);

    cout<<max(wrapSum, nonwrapSum);
    

    
    return 0;
}