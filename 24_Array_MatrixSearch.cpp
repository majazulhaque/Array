#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int M[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> M[i][j];
        }
    }

    int target;
    cin >> target;
    int row = 0;
    int col = m - 1;

    bool flag = false;

    while (row < n && col >= 0)
    {
        if (M[row][col] == target)
        {
            flag = true;
            cout << row << " " << col << endl;
        }
        if (M[row][col] > target)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    if (flag)
    {
        cout << "Target is found" << endl;
    }
    else
    {
        cout << "Target is not found" << endl;
    }

    return 0;
}
