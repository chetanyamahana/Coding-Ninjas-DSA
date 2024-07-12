#include <bits/stdc++.h>
#define int long long
using namespace std;
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    sort(num.begin(), num.end());
    int i = num.size() - 1;
    int ct = 0;
    while (i >= 0)
    {
        int k = x / num[i];
        ct += k;
        x -= k * num[i];
        if (x == 0)
        {
            return ct;
        }
        i--;
    }
    return -1;
}
void solve()
{
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout<<minimumElements(v,x)<<endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
