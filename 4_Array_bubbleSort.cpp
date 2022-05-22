#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    int counter =  1;
    while (counter < n-1)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (A[i] > A[i+1])
            {
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
            
        }
        counter++;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    
    
    

    return 0;
}