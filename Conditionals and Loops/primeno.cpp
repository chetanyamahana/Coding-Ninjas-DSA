#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter Number:"<<endl;
    cin>>N;
    int i = 2;
    bool divided = false;
    while(i<N){
        if(N%i==0){
            cout<<"Not Prime"<<endl;
            divided  = true;
            break;
          
        }
        i++;
    }
    if(!divided){
        cout<<"Prime"<<endl;
    }
    return 0;
}