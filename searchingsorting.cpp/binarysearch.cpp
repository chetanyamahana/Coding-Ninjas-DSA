#include <iostream>
using namespace std;
int binarysearch(int *arr,int n,int target){
    int start = 0;
    int end = n-1;
    int mid = (start + end) / 2;
     if (arr[mid] == target)
    {
        return mid;
    }
    else if(arr[mid]>target){
        int new_arr[mid];
        for(int i=0;i<mid;i++){
            new_arr[i]=arr[i];
        }
        binarysearch(new_arr,mid,target);
    
    }else if(arr[mid]<target){
        int new_arr[n-mid];
        for (int i = 0; i <n-mid; i++)
        {
            new_arr[i] = arr[i+mid];
        }
        binarysearch(new_arr, mid, target);
    }
}
int main(){
    int n;
    int arr[n];
    int target;
    cout << "Enter the size of array:";
    cin>>target;
    
    cin>>n;
  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    binarysearch(arr, n, target);
}
