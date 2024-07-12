#include <iostream>
using namespace std;
int main(){
    int N ;
    cout<<"Enter N:";
    cin>>N;
    int i = 1;
    int j;

    while(i<=N){
        j = 1;
        while(j<=i){
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
    return 0;
}
