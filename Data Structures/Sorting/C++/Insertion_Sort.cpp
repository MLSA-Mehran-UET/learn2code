//This file explains everything about Insetion sort
//Intutuion : The basic idea behind Insetion sort is basically the array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted array.

//C++ Code
#include <bits/stdc++.h>
using namespace std;
//Insertion sort function
void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (int i = 1; i < n; i++)
    {
        //Below code is for picking an element in the unsorted array and placing at its correct position.
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
//Driver function :
int main()
{
    int n;
    cin >> n;
    int arr[n];
    //Taking input form the user
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //calling the insertion sort for sorting the array in-place
    insertionSort(arr, n);

    //printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

//Time complexity : O(N^2) ,here n is the number of elements in the array
//Auxiliary Space : O(1)