#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool prime = true;
    int i=2;
    int j=2;
while(j<=n){
    prime = true;
    while(i<j){
        i=2;
        if(j%i==0){
            prime = false;
            break;
        }else{
            i++;

        }
    }
    if(prime){
        cout<<j<<endl;
        j++;
    }else{
        j++;
    }
}   
}