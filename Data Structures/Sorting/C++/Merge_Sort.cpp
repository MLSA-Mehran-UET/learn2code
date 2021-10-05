//Merge Sort is basically a divide and conquer alogorihm.
//The basic idea beind Merge Sort is dividing the input arrays in two halve ,calls recursively for itself for its two halves ,and then merges the two sorted array.
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    //finding sizes of the two subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;

    //Creating temp arrays
    int arr1[n1];
    int arr2[n2];

    //copying data from arr[] to these temporary arrays
    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[mid + 1 + i];
    }

    //Merging of two temp arrays into one array[ left ....right]
    // Initial index of first sub-array
    int indexOfSubArrayOne = 0;

    // Initial index of second sub-array
    int indexOfSubArrayTwo = 0;

    // Initial index of merged array
    int indexOfMergedArray = left;

    // Merge the temp arrays back into arr[left .... right]
    while (indexOfSubArrayOne < n1 && indexOfSubArrayTwo < n2)
    {
        if (arr1[indexOfSubArrayOne] <= arr2[indexOfSubArrayTwo])
        {
            arr[indexOfMergedArray] = arr1[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            arr[indexOfMergedArray] = arr2[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // arr1[], if there are any
    while (indexOfSubArrayOne < n1)
    {
        arr[indexOfMergedArray] = arr1[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // arr2[], if there are any
    while (indexOfSubArrayTwo < n2)
    {
        arr[indexOfMergedArray] = arr2[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    //Base condition
    if (start >= end)
    {
        return;
    }

    //finding the mid index
    int mid = start + (end - start) / 2;

    //calling recursively for the left subarry [left , mid+1]
    mergeSort(arr, start, mid);

    //calling recursively for the right subarray [mid+1, end]
    mergeSort(arr, mid + 1, end);

    //merging of two sorted arrays into a single array
    merge(arr, start, mid, end);
}

//Driver code
int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    int arr[n];
    //taking input form the user
    cout << "Enter the elements of the array:-" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //Calling the merge sort function
    mergeSort(arr, 0, n - 1);

    //printing of the array after merge sort
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}