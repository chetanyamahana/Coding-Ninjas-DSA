#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        while (j < n && (v[i] & v[j]) >= (v[i] ^ v[j]))
        {
            j++;
        }
        ans += (j - i - 1);
    }
    cout << ans << endl;
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
