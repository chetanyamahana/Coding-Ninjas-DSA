#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    int n = nums.size();
    int subsets = (1 << n);
    for (int num = 0; num < subsets; num++)
    {
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (num & (1 << i))
            {
                temp.push_back(nums[i]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
    return 0;
}
