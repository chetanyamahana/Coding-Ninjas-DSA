#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int j = 2; j <= n; j++)
    {
        bool prime = true;
        int i = 2;
        while (i < j)
        {
            if (j % i == 0)
            {
                prime = false;
                break;
            }
            i++;
        }
        if (prime)
        {
            cout << j << endl;
        }
    }
    cout << endl;
    return 0;
}
