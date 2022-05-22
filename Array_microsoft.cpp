#include<iostream>
using namespace std;

// Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.

int main(){

    int n,s;
    cin>>n>>s;
    
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    // int current = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     current = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         current += A[j];
    //         if (current == s)
    //         {
    //             cout<<i+1<<" "<<j+1<<endl;
    //         }
            
    //     }
        
    // }
    

    int i = 0, j = 0, st = -1, end = -1, sum = 0;

    while (j<n && sum + A[j] <= s)
    {
        sum += A[j];
        j++;
    }
    if (sum == s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while (j<n)
    {
        sum += A[j];
        while (sum > s)
        {
            sum -= A[i];
            i++;
        }
        if (sum == s)
        {
            st = i+1;
            end = j+1;
            break;
        }
        j++;
   
        
    }
    cout<<st<<" "<<end<<endl;

    
    
    

    
    return 0;
}