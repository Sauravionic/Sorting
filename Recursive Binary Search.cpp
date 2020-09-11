int binarySearch(int arr[], int low,
                 int high, int key)
{
    if (high < low)
        return -1;

    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (key == arr[mid])
        return mid;

    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);

    // else
    return binarySearch(arr, low, (mid - 1), key);
}