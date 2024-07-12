#include <iostream>
using namespace std;
int main(){
    int P = 10000;
    int rate = 5;
    int time = 2;//years
    int si = (P*rate*time)/100;
    cout<<"Simple interest:"<<si<<endl;
    return 0;
}