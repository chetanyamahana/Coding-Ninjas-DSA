#include <iostream>
using namespace std;

int main()
{
    char c;
    c = cin.get();
    int count = 0;
    int characters = 0, digits = 0, spaces;
    while (c != '$')
    {
        count++;
        cin >> c;
        int ch = c;
        if (ch == 32)
        {
            spaces++;
        }
        else if (ch > 48 && ch < 57)
        {
            digits++;
        }
        else
        {
            characters++;
        }
    }
    spaces = count - characters - digits;
    cout << characters << " " << digits << " " << spaces;
}