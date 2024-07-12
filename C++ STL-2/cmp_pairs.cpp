#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b) { return a.second > b.second; }
int main()
{
    // Initialize a vector and string
    vector<int> arr1 = {3, 5, 1, 2, 4};
    string str = "codingNinja";
    // Sort the vector
    //  sort vector of pair by descending order of second element in the pair using comparator
    vector<pair<int, int>> arr2 = {{1, 2}, {7, 8}, {4, 5}, {2, 3}};
    sort(arr2.begin(), arr2.end(), cmp);
    for (auto i : arr2)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
}