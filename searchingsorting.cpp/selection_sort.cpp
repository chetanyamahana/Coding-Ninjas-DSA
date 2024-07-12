#include <iostream>
using namespace std;


void selectionSort(int input[],int n){
    for(int i=0;i<n-1;i++){
    //Find min element in array
    int min = input[i];
    int min_index=i;
    for(int j=i+1;j<n;j++){
        if(input[j]<min){
            min=input[j];
            min_index=j;
        }
    }
    int temp = input[i];
    input[i]=input[min_index];
    input[min_index]=temp;
}}
int main(){
    int input[] = {3,1,6,9,0,4};
    selectionSort(input,6);
    for(int i=0;i<6;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}