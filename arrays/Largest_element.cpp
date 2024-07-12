#include <iostream>
#include <climits>
using namespace std;
int main(){
    cout << "Enter the length of array:";
    int n;
    cin >> n;
    int input[100];
    cout << "Enter Values:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    //int max = input[0];
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(input[i]>max){
            max=input[i];
        }else{
            continue;
        }
    }
    cout<<max;
    /*cout << "Elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }*/
}
