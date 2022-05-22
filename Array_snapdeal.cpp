#include <iostream>
using namespace std;

// You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

int main()
{

    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    bool N;
    bool idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] >= 0)
        {
            idx[A[i]] = true;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (idx[i] == false)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}