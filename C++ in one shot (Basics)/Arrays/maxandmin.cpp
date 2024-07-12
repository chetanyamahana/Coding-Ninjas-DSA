#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        
    }
    int max = arr[0];
    for(int i=0;i<=n-1;i++){
        if(max<=arr[i]){
            max = arr[i];
        }
    }
    
    int min = INT32_MAX;
    for (int i = 0; i <= n - 1; i++)
    {
        if (min >= arr[i])
        {
            min = arr[i];
        }
    }
    cout<<max<<" "<<min;
}