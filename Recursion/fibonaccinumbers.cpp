#include <iostream>
using namespace std;
int fibonaccinumbers(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int a=fibonaccinumbers(n-1);
    int b=fibonaccinumbers(n-2);
    cout<<a+b<<endl;
}
int main(){
   
    cout<<fibonaccinumbers(4)<<endl;
}