#include <iostream>
using namespace std;
int sum(int a[],int size,int start=0){
    //Default value of start index is 0 
    int ans=0;
    for(int i=start;i<size;i++){
        ans+=a[i];
    }
    return ans;
}
int sum2(int a,int b,int c=0,int d=0){
    return a+b+c+d;
}
int main(){
    int a[20];

    cout<<sum(a,20,0)<<endl;
    cout << sum2(1, 2) << endl;
    cout<<sum2(1,2,3)<<endl;
    cout << sum2(1, 2, 3,4) << endl;
}