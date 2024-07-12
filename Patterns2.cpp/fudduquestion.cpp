#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j = (n + 1) / 2;
    for(int i=1;i<=j;i++){
        for(int k=1;k<=j-i;k++){
            cout<<" ";
        }
        for(int l=1;l<=2*i-1;l++){
            cout<<"*";
        }
        cout<<endl;

    }

for(int i=1;i<=j-1;i++){
    for(int k=1;k<=i;k++){
        cout<<" ";
    }
    for(int l=1;l<=2*i+1;l++){
        cout<<"*";
    }
    cout<<endl;

}}
for(int i=1;i<=j-1;i++){
    for(int k=1;k<=i;k++){
        cout<<" ";
    }
    for(int l=1;l<=2*i+1;l++){
        cout<<"*";
    }
    cout<<endl;

}}