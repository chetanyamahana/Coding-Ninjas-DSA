#include <iostream>
using namespace std;
int sum(/*int a[]*/ int *a,int size){
    //cout<<sizeof(a)<<endl; a is passed as an pointer in case of arrays
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=a[i];
    }
    return ans;
}

int main()
{
    int a[10];
    cout<<sizeof(a)<<endl;
    cout<<sum(a+3,7)<<endl;
}