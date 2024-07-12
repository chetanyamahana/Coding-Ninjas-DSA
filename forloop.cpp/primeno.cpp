#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check:";
    cin>>n;
    bool prime = true;

 for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            prime = false;
           
        }else{

        }
    }
    if(!prime){
        cout<<"not Prime"<<endl;
    }else{
        cout<<"prime"<<endl;
    }
}