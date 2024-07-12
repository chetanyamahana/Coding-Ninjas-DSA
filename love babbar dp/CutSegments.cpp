#include <bits/stdc++.h>
#define int long long
using namespace std;
int cutSegments(int n, int x, int y, int z)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }
    int a = cutSegments(n - x, x, y, z) + 1;
    int b = cutSegments(n - y, x, y, z) + 1;
    int c = cutSegments(n - z, x, y, z) + 1;
    int ans = max(a, max(b, c));
    return ans;
}
int cutSegmentsMemo(int n, int x, int y, int z, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int a = cutSegmentsMemo(n - x, x, y, z, dp) + 1;
    int b = cutSegmentsMemo(n - y, x, y, z, dp) + 1;
    int c = cutSegmentsMemo(n - z, x, y, z, dp) + 1;
    dp[n] = max(a, max(b, c));
    return dp[n];
}
int DP(int n, int x, int y, int z)
{
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int a = INT_MIN;
        if (i - x >= 0)
        {
            a = dp[i - x] + 1;
        }
        int b = INT_MIN;
        if (i - y >= 0)
        {
            b = dp[i - y] + 1;
        }
        int c = INT_MIN;
        if (i - z >= 0)
        {
            c = dp[i - z] + 1;
        }
        dp[i] = max(a, max(b, c));
    }
    return dp[n];
}
void solve()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> dp(n + 1, -1);
    // int ans = cutSegments(n, x, y, z);
    // int ans = cutSegmentsMemo(n, x, y, z, dp);
    int ans = DP(n, x, y, z);
    if (ans > 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
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
