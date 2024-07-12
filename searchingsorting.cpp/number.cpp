#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {0, 1, 0, 0, 0, 1, 1, 1, 0};
    int no1 = 0;
    int no0 = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == 0)
        {
            no0++;
        }
        else if (arr[i] == 1)
        
        {
            no1++;
        }
    }
    int new_arr[9];
    for (int i = 0; i < no1; i++)
    {
        new_arr[i] = 1;
    }
    for (int i = no1; i < 9; i++)
    {
        new_arr[i] = 0;
    }
    for (int i = 0; i < 9; i++)
    {
        cout << new_arr[i] << " ";
    }
}
