#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    n = 2*m+1;
    cin>>n;
    int arr[n];
    int sort_arr[n];
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Sorting an array
    for(int i=0;i<n;i++){
        int min = arr[i];
        for(int j=i+1;j<=n;j++){
            if(arr[j]<=min){
                min = arr[j];
            }
        }
        sort_arr[count] = min;
        
        count = count + 1;
    }
    for(int i=0;i<n;i++){
        cout<<sort_arr[i]<<" ";
    }
    /*for(int i=1;i<=n;i++){
        if(sort_arr[i]!=sort_arr[i+1]&&sort_arr[i]!=sort_arr[i-1]){
            cout<<sort_arr[i];


        }
    }*/
    

}