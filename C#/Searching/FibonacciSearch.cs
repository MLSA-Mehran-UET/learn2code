int FibonacciSearch(int[] arr, int target)
{
    int n = arr.Length;

    int fibMMm2 = 0;  // (m-2)’th Fibonacci number
    int fibMMm1 = 1;  // (m-1)’th Fibonacci number
    int fibM = fibMMm2 + fibMMm1; // m’th Fibonacci number

    // Find smallest Fibonacci number >= n
    while (fibM < n)
    {
        fibMMm2 = fibMMm1;
        fibMMm1 = fibM;
        fibM = fibMMm2 + fibMMm1;
    }

    int offset = -1;

    while (fibM > 1)
    {
        int i = Math.Min(offset + fibMMm2, n - 1);

        if (arr[i] < target)
        {
            fibM = fibMMm1;
            fibMMm1 = fibMMm2;
            fibMMm2 = fibM - fibMMm1;
            offset = i;
        }
        else if (arr[i] > target)
        {
            fibM = fibMMm2;
            fibMMm1 = fibMMm1 - fibMMm2;
            fibMMm2 = fibM - fibMMm1;
        }
        else
        {
            return i;
        }
    }

    // Compare last element
    if (fibMMm1 == 1 && arr[offset + 1] == target)
        return offset + 1;

    return -1;
}
