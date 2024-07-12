#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &nums, int left, int mid, int right)
{
    int i = left, j = mid + 1;
    vector<int> tmp;
    while (i <= mid && j <= right)
    {
        if (nums[i] < nums[j])
        {
            tmp.push_back(nums[i]);
            i++;
        }
        else
        {
            tmp.push_back(nums[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        tmp.push_back(nums[i]);
        i++;
    }
    while (j <= right)
    {
        tmp.push_back(nums[j]);
        j++;
    }
    for (int k = 0; k < tmp.size(); k++)
    {
        nums[left + k] = tmp[k];
    }
}
void mergeSort(vector<int> &nums, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    mergeSort(nums, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}