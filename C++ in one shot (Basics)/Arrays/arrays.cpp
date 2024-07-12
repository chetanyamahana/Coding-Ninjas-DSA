#include <iostream>
using namespace std;
//void printArray()
int main(){
    int array[100];

    //Accesing an array
    cout<<"Accessing value at 15 index:"<<array[15]<<endl;
    //initalising an array
    int second[3]={5,7,11};
    //accessing an element 
    cout<<"value at 2 index "<<second[2]<<endl;
    //printing the array
    for(int i=0;i<sizeof(second);i++){
        cout<<second[i]<<endl;
    }


}