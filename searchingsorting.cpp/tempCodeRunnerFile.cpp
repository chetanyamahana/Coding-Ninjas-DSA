#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int x)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int input[n];
    cout << "Enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int x;
    cout << "Enter element you want to check:";
    cin >> x;
    cout << binarysearch(input, n, x) << endl;
}