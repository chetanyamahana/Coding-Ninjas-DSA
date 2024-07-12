#include <iostream>
using namespace std;
void swapAlternate(int *arr, int size)
{
    // Write your code here
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        if (n % 2 == 0)
        {
            int p = 0;
            for (int j = 0; j < n; j++)
            {
                cin >> arr[j];
            }
            for (int k = 0; k <= (n / 2) - 1; k++)
            {

                int a = arr[p];
                arr[p] = arr[p + 1];
                arr[p + 1] = a;
                p = p + 2;
            }
        }
        else
        {
            int p = 0;
            for (int j = 0; j < n; j++)
            {
                cin >> arr[j];
            }
            for (int k = 0; k < n / 2; k++)
            {

                int a = arr[p];
                arr[p] = arr[p + 1];
                arr[p + 1] = a;
            }
        }
    }
}