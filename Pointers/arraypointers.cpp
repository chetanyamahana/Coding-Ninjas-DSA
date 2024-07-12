#include <iostream>
using namespace std;
int main(){
    int a[10];
    cout<<a<<endl;
    cout << &a[0] << endl;
    a[0]=5;
    cout<<*a<<endl;//De reference operator
    cout<<*(a+1)<<endl;//Garbage Value Stored at index 1
    int *p=&a[0];
    cout<<p<<endl;
    cout << a << endl;

    cout << &p << endl;
    cout << &a[0] << endl;

    cout<<sizeof(p)<<endl;
    cout << sizeof(a) << endl;

    p=p+1;
    //a=a+1;//Cannot re assign a in symbol table
    //a++;  // Cannot re assign a in symbol table

    int m[6] = {1, 2, 3};
    int *b = m;
    cout << b[2];

    int n[] = {1, 2, 3, 4};
    
    int *q = n++;
    cout << *q << endl;
}