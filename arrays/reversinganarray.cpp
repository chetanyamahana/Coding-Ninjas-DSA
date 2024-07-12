#include <iostream>
using namespace std;
int main(){
    int arr[10000];
    int n;
    cin>>n;
    if(n==0){
        cout<<"0";
    }else{
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n%2==0){
        for(int i=0;i<=(n/2)-1;i++){
            int a = arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=a;
        }
    }else{
        for (int i = 0; i < (n / 2); i++)
        {
            int a = arr[i];
            arr[i] = arr[n - i-1];
            arr[n - i-1] = a;
        }
}
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}}