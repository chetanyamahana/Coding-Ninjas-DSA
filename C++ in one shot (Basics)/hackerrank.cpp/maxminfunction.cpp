#include <iostream>
using namespace std;
int main()
{
    long long array[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    long long sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + array[i];
    }
    long long new_array[5];
    for (int i = 0; i < 5; i++)
    {
        new_array[i] = sum - array[i];
    }
    long long max = 0;
    long long min = 1e18;
    for (int i = 0; i < 5; i++)
    {
        if (max < new_array[i])
        {
            max = new_array[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (min > new_array[i])
        {
            min = new_array[i];
        }
    }
    cout << min << "  " << max;
}
