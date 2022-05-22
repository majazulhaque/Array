#include <iostream>
using namespace std;

// Check if there exist two elements in an array such that their sum is equal to given k.

// bool pairSum1(int A[], int n, int key){

//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (A[i]+A[j] == key)
//             {
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }

//         }

//     }
bool pairSum2(int A[], int n, int key)
{

    int low = 0;
    int high = n-1;

    while (low < high)
    {

        if (A[low] + A[high] == key)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (A[low] + A[high] > key)
        {
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main()
{
    int n = 8;
    int A[n] = {2, 4, 7, 11, 14, 16, 20, 21};
    int key = 31;

    // cout<<pairSum1(A,n,key)<<endl;
    cout << pairSum2(A, n, key) << endl;

    return 0;
}