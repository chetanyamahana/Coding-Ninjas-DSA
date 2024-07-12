#include <iostream>
using namespace std;
int main(){
    char c;
    c-cin.get();
    int count = 0;
    while(c!='$'){
        count++;
        cin>>c;
    }
    cout<<count<<endl;
}