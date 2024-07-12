#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the length of array:";
    int n;
    cin >> n;
    int input[100];
    cout << "Enter Values:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout << "Elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }
}