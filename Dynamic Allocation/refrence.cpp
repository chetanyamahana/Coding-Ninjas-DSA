#include <iostream>
using namespace std;
void increment(int& i){
    i++;
}
//Bad Practise
int &f(int n){
    int a=n;
    return a;
}
// Bad Practise
int* f2(){
    int i=10;
    return &i;
}
int main(){
    int *p=f2();
    int i=10;
    //int j=i;
    int &k1=f(i);
    increment(i);
    cout<<i<<endl;
    int &j = i;//Refrence Variable 
    //Both j and i points to same memory location
    //Two different names for same person
    i++;
    cout<<j<<endl;
    j++;
    cout << i << endl;
    int k = 100;
    j=k;
    cout << i << endl;
    //int &j; This is incorrect 
}
