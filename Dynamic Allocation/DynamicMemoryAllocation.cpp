#include <iostream>
using namespace std;
int main(){
    int *p = new int;
    *p=10;
    cout<<*p<<endl;
    cout << p << endl;
    double *pd = new double;
    *pd = 10.0;
    cout << *pd << endl;
    cout << pd << endl;

    int* pa=new int[50];
    int n;
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
     int* pa2 = new int[n];
     for(int i=0;i<n;i++){
        cin>>pa2[i];
     }
     int max=-1;
     for(int i=0;i<n;i++){
        int curr=pa2[i];
        if(curr>max){
            max=curr;
        }
     }
     cout<<max<<endl;

}