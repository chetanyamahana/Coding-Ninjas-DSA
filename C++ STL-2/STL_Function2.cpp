#include <bits/stdc++.h>
using namespace std;
int main(){
    //initialize a vector
    vector<int> arr1={3,5,1,2,4};
    sort(arr1.begin(),arr1.end());
    if(binary_search(arr1.begin(),arr1.end(),2)){
        cout<<"Yes present in the array"<<endl;
    }else{
        cout<<"Not present in the array"<<endl;
    }
    vector<int> arr2 = {2,2,2,3,3,3,3,6,6,7};
    //lower_bound on the vector
    cout<<lower_bound(arr2.begin(),arr2.end(),2)-arr2.begin()<<endl;
    cout << lower_bound(arr2.begin(), arr2.end(), 1) - arr2.begin() << endl;
    cout << lower_bound(arr2.begin(), arr2.end(), 4) - arr2.begin() << endl;
    cout << lower_bound(arr2.begin(), arr2.end(), 6) - arr2.begin() << endl;
    cout << lower_bound(arr2.begin(), arr2.end(), 9) - arr2.begin() << endl;

    //upper_bound on the vector
    cout << upper_bound(arr2.begin(), arr2.end(), 2) - arr2.begin() << endl;
    cout << upper_bound(arr2.begin(), arr2.end(), 1) - arr2.begin() << endl;
    cout << upper_bound(arr2.begin(), arr2.end(), 4) - arr2.begin() << endl;
    cout << upper_bound(arr2.begin(), arr2.end(), 6) - arr2.begin() << endl;
    cout << upper_bound(arr2.begin(), arr2.end(), 9) - arr2.begin() << endl;
}