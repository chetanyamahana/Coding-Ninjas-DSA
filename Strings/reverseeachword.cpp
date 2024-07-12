#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    string s;
    //cin >> s;
    getline(cin, s);
    s += ' ';
    string ans = "";
    int i = 0;
    while (i < s.size())
    {
        if (s[i] != ' ')
        {
            stack<char> st;
            int j = i;
            for (; s[j] != ' '; j++)
            {
                st.push(s[j]);
            }
            i = j;
            while (!st.empty())
            {
                ans += st.top();
                st.pop();
            }
            ans += ' ';
        }
        i++;
    }
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i];
    }
}