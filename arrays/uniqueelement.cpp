#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count = 1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int a = arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]==a){
                count = count+1;
                int new_arr[n];
                for(int k=0;k<n;k++){
                    

                }
            }
        }
    }
}