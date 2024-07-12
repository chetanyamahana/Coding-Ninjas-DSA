#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;
    if (n >= 0)
    {
        if (n == 0)
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
    else
    {
        cout << "-1";
    }
    return 0;
}