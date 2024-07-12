#include <iostream>
using namespace std;
int main(){
    //constant int 
    const int i=10;
    //i=12; Can't change bcoq i is const
    //i=10; Have to initialize while declaring
    // Constant refrence from a non const int
    int j=12;
    const int & k=j;
    //k++;
    j++;
    cout<<j<<endl;
    cout << k << endl;

    //constant refrence from a const int
    int const j2 = 12;
    int const &k2 = j2;

    // refrence from a const int
    int const j3 = 123;
    //int & k3 = j3; Cannot do this

}