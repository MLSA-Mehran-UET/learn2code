#include <iostream>
using namespace std;

// Method to print the elements of the array
void displayArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int ele = a[i];
        while (j >= 0 && a[j] > ele)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = ele;
    }
}

int main()
{
    // Input the size and elements of array
    int n;
    cin >> n;
    int a[n];
    int x = 0;
    while (x < n)
    {
        cin >> a[x];
        x++;
    }

    int flag = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i + 1] < a[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "\nSorted Array: ";
        insertionSort(a, n);
    }
    else
    {
        cout << "\nData is already sorted: ";
    }

    // Display the Final Array
    displayArr(a, n);
}

/*
    Insertion Sort Algorithm in C++
    Input: Length of Array followed by Array of integers
    Output: Sorted array in ascending order
    
    Sample Input 1:
        5
        65 23 123 5 212
    Output 1:
        Sorted Array: 5 23 65 123 212 
    
    Sample Input 2:
        7
        32 54 112 43 23 1 2
    Output 2:
        Sorted Array: 1 2 23 32 43 54 112
*/
