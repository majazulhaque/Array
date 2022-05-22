#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int A[n];
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < n; i++)
    {
        // if (A[i] > maxNo)
        // {
        //     maxNo = A[i];
        // }

        maxNo = max(maxNo, A[i]);
        
        // if (A[i] < minNo)
        // {
        //     minNo = A[i];
        // }

        minNo = min(minNo, A[i]);
        
        
    }
    cout<<maxNo<<"  "<<minNo<<endl;

    
    
    

    return 0;
}