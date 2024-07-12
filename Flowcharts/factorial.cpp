#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int i=1,product=1;
    while(i<=n){
        product=product*i;
        i=i+1;
    }
    cout<<"Value of factorial is:"<<product;
    return 0;

}