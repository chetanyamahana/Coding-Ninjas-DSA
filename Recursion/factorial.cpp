#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=n;i>0;i--){
        if(i==0||i==1){
            fact=1*fact;
        }else{
            fact=n*factorial(n-1);
        }
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    
}