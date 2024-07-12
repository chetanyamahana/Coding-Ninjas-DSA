#include <iostream>
#include <cstring>

using namespace std;

void reverseStringWordWise(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    int length = count;
    int index[50];
    int noofspaces = 0;
    for (int i = 0; i < length; i++)
    {
        if (input[i] == ' ')
        {
            index[noofspaces] = i;
            noofspaces++;
        }
        else
        {
            continue;
        }
    }
    int no_of_space = noofspaces + 1;
    int end = length;
    int a = index[noofspaces];
    for (int i = 0; i <= no_of_space; i++)
    {
        if (i != 0)
        {
            end = a - 1;
        }
        a = index[noofspaces];
        noofspaces--;

        for (int j = a + 1; j < end; j++)
        {
            cout << input[j];
        }
        if (i != no_of_space)
            cout << " ";
        else
            cout << endl;
    }
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    cout << input << endl;
    reverseStringWordWise(input);
}