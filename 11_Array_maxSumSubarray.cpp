#include<iostream>
#include<climits>
using namespace std;

// Find the subarray of an array which has maximum sum.

int main(){

    int n;
    cin>>n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    
    // int maxSum = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += A[k];

    //         }
    //         maxSum = max(maxSum,sum);
            
    //     }
        
    // }
    // cout<<maxSum<<endl;
    
// CUMMULATIVE SUM APPROACH:---------

    int currSum[n+1];
    currSum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        currSum[i] = currSum[i-1] + A[i-1];
    }

    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
        
    }

    cout<<maxSum<<endl;
    
    
   
    return 0;
}