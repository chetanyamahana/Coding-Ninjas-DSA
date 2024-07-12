#include <iostream>
using namespace std;
int main(){
    int i=2,sum=0;
    int n;
    cout<<"Enter n:";
    cin>>n;
    while(i<=n){
        sum = sum+i;
        i=i+2;
    }
    cout<<sum;
    return 0;
}
