#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char input1[100] = "abcd";
    char input2[100] = "def";
    strcpy(input1, input2);
    cout << input1 << endl;
}