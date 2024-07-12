#include <iostream>
using namespace std;

int binarysearch(int *arr, int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return binarysearch(arr, start, mid - 1, target);
    }
    else
    {
        return binarysearch(arr, mid + 1, end, target);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int result = binarysearch(arr, 0, n - 1, target);

    if (result == -1)
    {
        cout << "Target not found." << endl;
    }
    else
    {
        cout << "Target found at index " << result << "." << endl;
    }

    return 0;
}
