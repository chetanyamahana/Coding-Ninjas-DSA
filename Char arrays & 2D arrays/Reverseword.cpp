
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
void reverseStringWordWise(char input[])
{
    // Write your code here
// using namespace std;

    vector<string> vec;
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        string temp = "";
        if (input[i] != ' ')
        {

            temp += input[i];
        }
        vec.push_back(temp);
    }
    //input.clear();
    string s="";
    for(int i=vec.size()-1;i>=0;i--){
        vec.pop_back()
        string temp ="" ;
        s+=" ";
    }

    for (int i = 0; i< count; i++)
    {
        input[i]= s[i];
        
    }
}
int main()
{
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}