#include<iostream>
using namespace std;

// An arithmetic array is an array that contains at least two integers and the difference between consecutive integers are equal. 
// For example,[9,10],[3,3,3], and [9,7,5,3] are arithmetic arrays, while [1,3,3,7],[2,1,2], and [1,2,4] are not airthmetic array.

// Sarasvati has an array of N non-negatice integers. The i-th integer of the array is Ai. She wants to choose a contiguous arithmetic
// subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithemetic
// subarray.

int main(){

    int n;
    cin>>n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    int ans = 2;
    int pd = A[1] - A[0];
    int j = 2;
    int curr = 2;

    while (j < n)
    {
        if (pd == A[j]-A[j-1])
        {
            curr++;
        }
        else{
            pd = A[j]- A[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        
        j++;
    }
    
    cout<<ans<<endl;
    
    
    


    return 0;
}