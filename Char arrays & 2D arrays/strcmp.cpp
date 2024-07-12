#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char input1[100];
    cin >> input1;
    char input2[100];
    cin >> input2;
    //int len = strlen(input);
    //cout << len << endl;
    if(strcmp(input1,input2)==0){
        cout<<"True";
    }else{
        cout<<"False";
    }
}