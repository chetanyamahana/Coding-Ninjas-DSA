#include <iostream>
using namespace std;
void g(int const & a){
    //a++;
}
void f(const int * p){

}
int main(){
    int const i =10;
    //int *p=&i;
    int const *p = &i;
    //(*p)++; Error

    int j=12;
    int const * p2 = &j;
    j++;
    cout<<j<<endl;
    cout << *p2 << endl;
}