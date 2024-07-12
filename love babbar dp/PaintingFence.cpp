#include <bits/stdc++.h>
#define int long long
using namespace std;
int helper(int n, int k)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return k * k;
    }
    int a = k * (1) * (k - 1) * (1);
    int b = k * (k - 1) * (1);
    int c = k * (k - 1) * (k - 1);
    return (a + b + c) * helper(n - 3, k);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    cout << helper(n, k) << endl;
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
