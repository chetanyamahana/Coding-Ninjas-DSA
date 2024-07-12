#include <iostream>
using namespace std;
void increment1(int **p){
    p=p+1;//No Change
}
void increment2(int **p)
{
    *p = *p + 1;
}//Change the address of pointer (p)
void increment1(int **p)
{
    **p = **p + 1;
}//Increments the value by 1
int main(){
    int i=10;
    int *p=&i;
    int **p2=&p;//Double pointer
    cout << p2 << endl;
    cout << &p << endl;
    cout<<endl;
    cout<<*p2<<endl;
    cout<<p<<endl;
    cout << endl;
    cout << **p2 << endl;
    cout << *p << endl;
}