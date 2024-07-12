#include <iostream>
using namespace std;
int main(){
    int i = 10;
    int *p = &i;
    cout<<sizeof(p)<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;

    i++;
    cout << i << endl;
    cout << *p << endl;

    int a = *p;
    a++;
    cout<<a<<endl;

    i=23;
    cout << i << endl;
    cout << *p << endl;
    *p=21;
    cout << i << endl;
    cout << *p << endl;

    (*p)++;
    cout << i << endl;
    cout << *p << endl;
}

