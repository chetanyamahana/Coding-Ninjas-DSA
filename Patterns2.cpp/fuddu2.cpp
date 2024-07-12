#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=5;i++){
        for(int j=i;j<=5;j++ ){
            cout<<"#";
        }cout<<endl;
    }
    for(int i=n;i>0;i--){
    for(int j=i;j>0;j--){
        cout<<"#";
    }
    cout<<endl;
}}