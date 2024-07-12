#include <iostream>
using namespace std;
int factorial(int a){
    int i=1;
    int fact = 1;
    while(i<=a){
    fact = i*fact;
    i++;
    }
    return fact;//Return keyword is must to have the output
    
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ans;
    /*int ans = (factorial(n)/(factorial(r)*factorial(n-r)));
    cout<<ans;*/
}