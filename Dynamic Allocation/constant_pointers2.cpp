#include <iostream>
using namespace std;
int main(){
    int i=10;
    int j=21;

    int const * p = &i;//p is saying that it is pointing towards a constant but p itself is not constant

    p=&j;
    //(*p)++
    //p is a pointer pointing towards a constant value
    int * const p2 = &i;
    (*p2)++;
    //p2=&j; Error
    //p2 is a constant pointer


    int const * const p3 = &i;
    //p3 bhi constant hai and i bhi constant 
    
    //p3=&j;
    //(*p3)++;
}