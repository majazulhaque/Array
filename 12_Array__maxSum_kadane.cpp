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
    cout<<maxSum;
    
    

    return 0;
}