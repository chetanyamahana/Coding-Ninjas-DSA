#include <iostream>
using namespace std;
#include <cstring>
void printallprefixes(char input[]){
    for(int i=0;input[i]!='\0';i++){
        //i represents end index of prefix
        for(int j=0;j<=i;j++){
            //j represents start index of prefix
            cout<<input[j];

        }
        cout<<endl;
    
    }

}
int main()
{
    /*char input1[100] = "abcd";
    char input2[100] = "xy";
    strncpy(input1, input2,4);
    cout << input1 << endl;*/
    char input1[100]="abcd";
    printallprefixes(input1);
}