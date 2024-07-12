#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char ch = 'A';
    int asc;
    asc = ch;
    char new_ch;
    while(i<=n){
        int j = 1;
        while(j<=n){
            new_ch = asc + j-1;
            cout<<new_ch;
            j++;

        }
        cout<<endl;
        i++;
    }
}