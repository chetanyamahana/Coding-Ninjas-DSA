#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter N:";
    cin>>N;
    int i=2;

while(i<N){
if(N%i==0){
            cout<<"Not prime";
            break;
        }else{
            i=i+1;
    }
}




    return 0;
}