#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int new_arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int min = arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
        }
        new_arr[i] = min;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<new_arr[i];
    }
}