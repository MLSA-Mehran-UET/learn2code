int InterpolationSearch(int[] arr, int target)
{
    int low = 0, high = arr.Length - 1;

    while (low <= high && target >= arr[low] && target <= arr[high])
    {
        if (low == high)
        {
            return arr[low] == target ? low : -1;
        }

        // Estimate the position
        int pos = low + ((target - arr[low]) * (high - low)) / (arr[high] - arr[low]);

        if (arr[pos] == target)
            return pos;

        if (arr[pos] < target)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return -1;
}
