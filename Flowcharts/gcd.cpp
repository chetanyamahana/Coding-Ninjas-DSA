#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int gcd = 1,i=1;
    while(i<=a){
        if(a%i==0){
            if(b%i==0){
                gcd = i;
            }
        }
        i=i+1;
    }
    cout<<"Greatest Common Divisor:"<<gcd;
    return 0;
}
