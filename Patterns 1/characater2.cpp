#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    int asc;
    asc = ch;
    char new_ch;
    while (i <= n)
    {
        int j = i;
        int k=1;
        while (k<= n)
        {
            new_ch = asc + j - 1;
            cout << new_ch;
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
}