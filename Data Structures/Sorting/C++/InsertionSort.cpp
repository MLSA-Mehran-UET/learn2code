// ********** insertion sort **********
#include <iostream>
using namespace std;

/* Insertion sort function*/
void insertionSort(int arr[], int n)
{
	int i, temp, j;
	for (i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;
		
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
}

// Function to print array
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
}

/* Driver code */
int main()
{
	int arr[] = { 22, 10, 15, 4, 8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The array: ";
	printArray(arr, n);
	cout << " is sorted to: ";
	insertionSort(arr, n);
	printArray(arr, n);
	cout << endl;

	return 0;
}

// This is code is contributed by rathbhupendra
