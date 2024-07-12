#include <iostream>
using namespace std;
int main(){
    int a[3];
    int b[3];
    for(int i=0;i<=2;i++){
        cin>>a[i];
    }
    for (int i = 0; i <= 2; i++)
    {
        cin >> b[i];
    }
    /*for(int i=0;i<=2;i++){
        cout<<a[i]<<endl;
    }
    for (int i = 0; i <= 2; i++)
    {
        cout << b[i] << endl;
    }*/
    int alice_score = 0, bob_score = 0;
    for(int i=0;i<=2;i++){
        if(a[i]>b[i]){
            alice_score++;
        }
        else if(a[i]<b[i]){
            bob_score++;
        }
        else if(a[i]=b[i]){
            continue;
        }
    }
    cout << alice_score <<" "<< bob_score;
}