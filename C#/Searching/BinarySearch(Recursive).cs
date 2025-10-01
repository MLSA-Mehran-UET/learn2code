int BinarySearchRecursive(int[] arr, int left, int right, int target)
{
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[mid] < target)
        return BinarySearchRecursive(arr, mid + 1, right, target);
    else
        return BinarySearchRecursive(arr, left, mid - 1, target);
}
