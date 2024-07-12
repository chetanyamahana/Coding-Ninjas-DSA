#include <iostream>
using namespace std;
//Brute Force 
int fib(int n){
    if(n<=1){
        return n;
    }
    int a=fib(n-1);
    int b=fib(n-2);
    return a+b;
}
// Memoizaton: Top Down Approach
//Recursive 
int helper(int n, int *ans)
{
    if (n <= 1)
    {
        return n;
    }
    // Check if output already exists
    if (ans[n] != -1)
    {
        return ans[n];
    }
    int a = helper(n - 1, ans);
    int b = helper(n - 2, ans);

    // Save the output for future use
    ans[n] = a + b;

    // Return the final output
    return ans[n];
}
int helper2(int n){
    if(n<=1){
        return n;
    }
    int a=0;
    int b=1;
    int c=0;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
//Dynamic Programming: Bottom Up Approach 
//Iterative 
int helper3(int n)
{
    int *ans = new int[n+1];
    ans[0]=0;
    ans[1]=1;
    for (int i = 2; i <= n; i++)
    {
        ans[i]=ans[i-1]+ans[i-2];
    }
    return ans[n];
}
int fibo(int n){
    int *ans = new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    return helper(n,ans);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    cout<<helper2(n)<<endl;
}

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


