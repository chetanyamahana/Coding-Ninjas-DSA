#include <iostream>
using namespace std;
int len(char arr[])
{
    int index = 0;
    if (arr[index] == '\0')
    {
        return 0;
    }
    return 1 + len(arr + 1);
}
void removeX(char arr[])
{
    int index = 0;
    if (arr[index] == '\0')
    {
        return;
    }
    if (arr[index] != 'x')
    {
        removeX(arr + 1);
    }
    else
    {
        int c = 0;
        while (arr[c] != '\0')
        {
            arr[c] = arr[c + 1];
            c++;
        }
        removeX(arr);
    }
    return;
}
int main()
{
    char input[100];
    cin.getline(input, 100);
    int ans = len(input);
    cout << ans << endl;
    removeX(input);
    cout << input << endl;
}