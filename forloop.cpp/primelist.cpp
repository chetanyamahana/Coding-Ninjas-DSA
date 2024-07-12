#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool prime = true;
    int j;
    for (int j = 2; j <= n; j++)
    {
        for (int i = 2; i < j; i++)
        {

            if (j % i == 0)
            {
                prime = false;
                break;
            }
        else{
        if (!prime)
        {
        }
        else
        {
            cout << j << endl;
        }}
    }
    }
}