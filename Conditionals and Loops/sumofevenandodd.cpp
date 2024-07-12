#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int even = 0, odd = 0;
    int i=0, j = 0, l=0;

    int k = 10;
    while (n >= k)
    {
        i = n % k;

        l = ((i - j) / k) * 10;
        if (l % 2 == 0)
        {
            even = even + l;
        }
        else
        {
            odd = odd + l;
        }
        j = i;
        k = k*10;
    }
    cout << even << " " << odd;
}