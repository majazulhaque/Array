#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int A[n];
    int maxNo = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo,A[i]);
        cout<<maxNo<<" at "<<i<<endl;
    }

    
    


    return 0;
}