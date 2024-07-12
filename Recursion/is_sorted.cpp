#include <iostream>
using namespace std; 
bool is_sorted2(int a[],int size){
    if(size==0||size==1){
        return true;
    }
    bool issmalleroutput=is_sorted2(a+1,size-1);
    if(!issmalleroutput){
        return false;
    }
    if(a[0]>a[1]){
        return false;
    }else{
        return true;
    }
}
bool is_sorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    bool is_smallsorted = is_sorted(arr+1,size-1);
    return is_smallsorted;
    
    /*if(is_smallsorted){
        return true;
    }else{
        return false;
    }*/
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<is_sorted2(arr,size)<<endl;
}