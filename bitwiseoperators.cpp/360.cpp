#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

bool solve()
{
    int n,range,sum,copy;
    cin>>n;
    vector<int>vec(n);
    range=pow(2,n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    for(int i=0;i<range;i++)
    {
        sum=0,copy=i;
        for(int j=0;j<n;j++)
        {
            if(copy&1)
            {
                sum+=vec[j];
            }
            else
            {
                sum-=vec[j];
            }
            copy=copy>>1;
        }
        if(sum%360==0)
        {
            return true;
        }
    }
    return false;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve()?yes:no;
    return 0;
}