#include <bits/stdc++.h>
#define int long long
using namespace std;
void trimSpaces(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    char c = ' ';
    int space = 0;
    int index[count];
    for (int i = 0; i < count; i++)
    {
        if (input[i] == c)
        {
            index[space] = i;
            space++;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < space; i++)
    {
        int a = index[i];

        for (int i = a + 1; a < count; a++)
        {
            input[a] = input[a + 1];
        }
        for (int k = i + 1; i < space; i++)
        {
            index[i] = index[i] - 1;
        }
    }
}
void solve()
{
    char input[1000];
    cin>>input;
    trimSpaces(input);
    cout<<input<<endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
