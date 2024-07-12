#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; ++i)

int main()
{
    int t = 1;

    while (t--)
    {
        int n;
        std::cin >> n;
        int a[n];
        rep(i, n) std::cin >> a[i];
        bool res = false;

        for (int i = 0; i <= ((1 << n) - 1); i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    sum += a[j];
                    sum %= 360;
                }
                else
                {
                    sum -= a[j];
                    sum %= 360;
                }
            }
            if (sum % 360 == 0)
            {
                res = true;
            }
        }
        if (res)
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';
    }

    return 0;
}