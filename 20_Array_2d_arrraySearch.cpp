#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int A[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>A[i][j];
        }
        
        
    }

    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] == key)
            {
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
            
        }
       
        
    }
    if (flag)
    {
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }
    
    
    



    return 0;
}