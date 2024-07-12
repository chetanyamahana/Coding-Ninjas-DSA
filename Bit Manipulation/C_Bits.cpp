#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int l, r;
        cin >> l >> r;
        int res = l;
        for (int i = 0; i < 64; i++)
        {
            if (res & (1LL << i))
            {
                continue;
            }
            else
            {
                if (res + (1LL << i) > r)
                {
                    break;
                }
                else
                {
                    res += (1LL << i);
                }
            }
        }
        cout << res << endl;
        n--;
    }
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    solve();
    return 0;
}
