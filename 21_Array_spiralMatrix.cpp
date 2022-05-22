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

    int row_start = 0;
    int row_end = n-1;
    int column_start = 0;
    int column_end = m-1;

    while(row_start <= row_end && column_start <= column_end)
    {
        // FOR ROW START
        for (int i = column_start; i <= column_end; i++)
        {
            cout<<A[row_start][i]<<" ";
        }
        row_start++;
        // FOR COLUMN END
        for (int i = row_start; i <= row_end; i++)
        {
            cout<<A[i][column_end]<<" ";
        }
        column_end--;
        // FOR ROW END
        for (int i = column_end; i >= column_start; i--)
        {
            cout<<A[row_end][i]<<" ";
        }
        row_end--;
        // FOR COLUMN START
        for (int i = row_end; i >= row_start; i--)
        {
            cout<<A[i][column_start]<<" ";
        }
        column_start++;
        
    }
    

    
   
    return 0;
}

    
    
