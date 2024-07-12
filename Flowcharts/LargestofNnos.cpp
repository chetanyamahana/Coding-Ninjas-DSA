#include <iostream>
using namespace std;
int main(){
    int i=1;
    int N;
    cout<<"Enter N:";
    cin>>N;
    int current_no,max;
    while(i<=N){
        cin>>current_no;
        if(i==1){
            max = current_no;}
        else{
            if(current_no>max){
                max = current_no;
            }else{

            }
        

            }
        i=i+1;



        
    }
    cout<<"Max:"<<max;
    return 0;
}