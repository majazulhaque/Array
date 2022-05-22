#include<iostream>
#include<climits>
using namespace std;

// Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. 
// A day is breaking if it satisties both of the following conditions:
// * The number of visitors on the day is strictly larger than the number of visitors on each of the previous days. 
// * Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following days.
// Note the very first day could be a record breaking day!

int main(){

    int n;
    cin>>n;

    int A[n+1];
    A[n] = -1;


    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    int maxNo = INT_MIN;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > maxNo && A[i] > A[i+1])
        {
            cout<<A[i]<<endl;
            maxNo = max(maxNo,A[i]);
            ans += 1;
        }
        
    }
    cout<<"Number of record breakng days is "<<ans<<endl;
    
    


    return 0;
}