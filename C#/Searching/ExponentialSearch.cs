int ExponentialSearch(int[] arr, int target)
{
    int n = arr.Length;

    if (arr[0] == target)
        return 0;

    int i = 1;
    while (i < n && arr[i] <= target)
        i *= 2;

    // Binary search in found range
    return BinarySearchRecursive(arr, i / 2, Math.Min(i, n - 1), target);
}
