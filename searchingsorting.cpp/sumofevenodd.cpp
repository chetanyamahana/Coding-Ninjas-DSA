#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int even = 0,odd=0;
    while(n>0){
        if(n%2==0){
            even = even + n%10;
        }else{
            odd = odd + n%10;
        }
        n=n/10;
    }
    cout<<even<<endl;
    cout<<odd<<endl;
}