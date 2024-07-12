#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    int index = -1;
    cout << "Enter elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number you want to check:";
    int val;
    cin >> val;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            index = i;
        }
        else
        {
            continue;
        }
    }
    if (index == -1)
    {
        cout << "Required element is not present in given array.";
    }
    else
    {
        cout << "Index of required element is:";
        cout << index << endl;
    }
}