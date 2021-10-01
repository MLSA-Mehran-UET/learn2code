#include <iostream>
using namespace std;

// Binary Search is used to search in sorted arrays
// as it is more efficient than linear search

int binarySearch(int a[], int n, int ele)
{
    int l = 0;
    int u = n - 1;
    int mid;

    while (l <= u)
    {
        mid = (l + u) / 2;
        if (a[mid] == ele)
            return mid;
        else if (ele > a[mid])
            l = mid + 1;
        else
            u = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {3, 5, 10, 13, 32, 324, 534};
    int e = 32;
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = binarySearch(arr, n, e);

    if (res == -1)
        cout << "Element not found in array";
    else
        cout << "Element found at index " << res;
}
