#include <iostream>
#define MULTIPLY(a,b) a*b
#define SQUARE(x) x*x
using namespace std;
int main(){
    cout<<MULTIPLY(2+3,3+5)<<endl;
    int x=36/SQUARE(6);
    cout<<x<<endl;
}