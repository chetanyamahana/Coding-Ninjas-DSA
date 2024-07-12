#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[2 * N + 2];
    int ans[2];
    for (int i = 0; i < 2 * N + 2; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 2 * N + 2; i++)
    {
        cout << arr[i] << endl;
    }
    int count = 0;
    for (int j = 0; j < 2 * N + 2; j++)
    {
        int a = arr[j];

        for (int i = j + 1; i < 2 * N + 2; i++)
        {
            if (arr[i] == a)
            {
                count = count + 1;
                if (count == 1)
                {
                    ans[0] = a;
                }
                else if (count == 2)
                {
                    ans[1] = a;
                }
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << ans[i] << endl;
    }
}