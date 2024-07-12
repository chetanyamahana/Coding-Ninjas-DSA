#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int k = n;
        char ch = 'A' + k - 1;
        int ascii = ch;
        char new_char = ascii;
        int j = 1;
        while (j <= i)
        {
            cout << new_char;
            ascii--;
            j++;
        }
        cout << endl;
        i++;
    }
}