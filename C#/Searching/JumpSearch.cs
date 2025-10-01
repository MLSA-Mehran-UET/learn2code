using System;

int JumpSearch(int[] arr, int target)
{
    int n = arr.Length;
    int step = (int)Math.Floor(Math.Sqrt(n));
    int prev = 0;

    // Jump until we find a block that may contain the element
    while (prev < n && arr[Math.Min(step, n) - 1] < target)
    {
        prev = step;
        step += (int)Math.Floor(Math.Sqrt(n));

        if (prev >= n)
            return -1;
    }

    // Linear search within the block
    for (int i = prev; i < Math.Min(step, n); i++)
    {
        if (arr[i] == target)
            return i;
    }

    return -1;
}
