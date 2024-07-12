#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        int m = (n+1)/2;
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=m-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"*";
            }
            for(int l=1;l<=i-1;l++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=1;i<=n-m;i++){
            for(int j=1;j<=i;j++){
                cout<<" ";
            }
            for(int k=1;k<=m-i;k++){
                cout<<"*";
            }
            for(int l=1;l<=m-i-1;l++){
                cout<<"*";
            }
            cout<<endl;
        }

        
    }
}