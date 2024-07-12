#include <iostream>
using namespace std;
void Sumoftwoarrays(int *input1, int size1, int *input2, int size2, int *output)
{

    int sum = 0, carry = 0;
    if (size1 >= size2)
    {
        int count = size2 - 1;
        for (int i = size1 - 1; i >= 0; i--)
        {
            sum = input1[i] + input2[count] + carry;
            count--;
            if (sum >= 10)
            {
                carry = 1;
                sum = sum - 10;
                output[i + 1] = sum;
            }
            else
            {
                carry = 0;
                output[1 + i] = sum;
            }
        }
    }
    else
    {
        int count = size1 - 1;
        for (int i = size2 - 1; i >= 0; i--)
        {
            sum = input2[i] + input1[count] + carry;
            count--;
            if (sum >= 10)
            {
                carry = 1;
                sum = sum - 10;
                output[i + 1] = sum;
            }
            else
            {
                carry = 0;
                output[i + 1] = sum;
            }
        }
    }
    if (carry > 0)
    {
        output[0] = carry;
    }
}
int main()
{
    int size1;
    cin >> size1;
    int input1[size1];
    for (int i = 0; i < size1; i++)
    {
        cin >> input1[i];
    }
    int size2;
    cin >> size2;
    int input2[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> input2[i];
    }
    int size3;
    if (size1 >= size2)
    {
        size3 = size1 + 1;
    }
    else
    {
        size3 = size2 + 1;
    }
    int output[size3];
    Sumoftwoarrays(input1, size1, input2, size2, output);
    for (int i = 0; i < size3; i++)
    {
        cout << output[i] << " ";
    }
    return 0;
}

