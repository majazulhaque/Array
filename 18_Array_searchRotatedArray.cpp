#include <iostream>
using namespace std;

// Search an element in a sorted and rotated array

int binarySearch(int arr[], int low, int high, int k)
{

    int mid = (low + high) / 2;

    while (low <= high)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}

int findpivot(int arr[], int s, int e)
{

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        else if (arr[s] <= arr[mid])
        {
            return findpivot(arr, mid + 1, e);
        }
        else
        {
            return findpivot(arr, s, mid - 1);
        }
    }
}

int pivotedbinarySearch(int arr[], int n, int k)
{

    int pivot = findpivot(arr, 0, n - 1);

    if (pivot == -1)
    {
        return binarySearch(arr, 0, n - 1, k);
    }
    if (arr[pivot] == k)
    {
        return pivot;
    }
    if (arr[0] <= k)
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
    else
    {
        return binarySearch(arr, pivot + 1, n - 1, k);
    }
}

int main()
{

    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pivotedbinarySearch(arr, n, k);

    return 0;
}