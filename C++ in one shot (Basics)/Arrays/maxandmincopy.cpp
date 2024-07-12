#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter n:";
    cin>>n;
    int amax=INT32_MIN,amin=INT32_MAX;
    while(n--)
    {
        cin>>temp;
        amin=min(amin,temp);
        amax = max(amax, temp);
    }
    cout<<amax<<" "<<amin;
}