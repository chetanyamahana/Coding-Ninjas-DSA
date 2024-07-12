#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int  a,b;
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After Swapping:"<<endl;
    cout<<"a:"<<a<<" "<<"b:"<<b<<endl;

}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}

