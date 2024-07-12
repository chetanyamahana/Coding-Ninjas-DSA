#include <iostream>
#include <climits>
using namespace std;
void printarray(int input[],int n){
for(int i=0;i<n;i++){
    cout<<input[i]<<endl;
}
}
int main(){
    int input[10]={1,2,3};
    /*int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>input[i];

    }*/
    printarray(input,10);

}
