#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to delete:";
    cin>>x;
    int index;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            index = i;
        }
    }
    n=n-1;
    int new_arr[n];
    cout<<index<<endl;
    for(int i = index;i<=n;i++){
        arr[i]=arr[i+1];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}