#include <bits/stdc++.h>
#define int long long
using namespace std;
#define MOD 1000000007
int solve(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    int ans = ((n - 1) % MOD * (solve(n - 1) % MOD + solve(n - 2) % MOD)) % MOD;
    return ans;
}
int memo(int n, vector<int> &dp)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = ((n - 1) % MOD * (memo(n - 1, dp) % MOD + memo(n - 2, dp) % MOD)) % MOD;
    return dp[n];
}
int Dp(int n)
{
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = (((i - 1) % MOD) * (dp[i - 1] % MOD + dp[i - 2] % MOD)) % MOD;
    }
    return dp[n];
}
int Dp2(int n)
{
    int a = 0;
    int b = 1;
    if (n == 1)
    {
        return a;
    }
    for (int i = 3; i <= n; i++)
    {
        int c = (((i - 1) % MOD) * (b % MOD + a % MOD)) % MOD;
        a = b;
        b = c;
    }
    return b;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector<int> dp(n + 1, -1);
        // int ans = memo(n, dp);
        int ans = Dp2(n);
        cout << ans << endl;
        t--;
    }
    return 0;
}
