#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to check:";
    cin>>n;
    int a=0,b=1;
    int c= a+b;
    if(n==0){
        cout<<"yes";    
    }
    while(c<=n){
    a=b;
    b=c;
    c=a+b;
    if(n==1){
        cout<<"Yes";
    }
    if(c==n){
        cout<<"Yes";
        break;
    }
    }
    return 0;
}
