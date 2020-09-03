#include <iostream>
using namespace std;

int binarySearch(int A[], int length, int val)
{

    int low, mid, high;

    low = 0;           // set initial value for low
    high = length - 1; // set initial value for high

    while (low <= high)
    {
        mid = low + (high - low) / 2; // update mid

        if (A[mid] > val)
        {
            high = mid - 1;
        }
        else if (A[mid] < val)
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return (-1);
}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x;
    cout << "Enter the number to be searched through binary search :-  ";
    cin >> x;
    int z = binarySearch(arr, 5, x);

    if (z == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "The number " << x << " Found at position " << z + 1 << endl;
    }

    return 0;
    }
