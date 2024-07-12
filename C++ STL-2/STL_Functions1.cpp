#include <bits/stdc++.h>
using namespace std;
bool cmp(int &a,int &b){return a>b;}
int main(){
    //Initialize a vector and string
    vector<int> arr1={3,5,1,2,4};
    string str="codingNinja";

    //reverse string and vector
    reverse(arr1.begin(),arr1.end());
    for(auto i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(str.begin(), str.end());
    for (auto i : str)
    {
        cout << i << " ";
    }
    cout << endl;

    //maximum value in the vector and the index maximum value is present
    int max_element_index=max_element(arr1.begin(),arr1.end())-arr1.begin();
    int max_element_value=*max_element(arr1.begin(), arr1.end());
    cout<<"Maximum element is:"<<max_element_value<<" & present at index: "<<max_element_index<<endl;

    // minimum value in the vector and the index minimum value is present
    int min_element_index = min_element(arr1.begin(), arr1.end()) - arr1.begin();
    int min_element_value = *min_element(arr1.begin(), arr1.end());
    cout << "Minimum element is:" << min_element_value << " & present at index: " << min_element_index << endl;

    //maximum and minimum of 3 numbers
    int a=1,b=3,c=2;
    int max_val=max(a,max(b,c));
    int max_val2 = max({a,b,c});
    int min_val2 = min({a, b, c});

    //Sum of all the numbers in the vector
    int sum=accumulate(arr1.begin(),arr1.end(),0);
    cout<<"Sum: "<<sum<<endl;

    //sort the vector
    //ascending order
    sort(arr1.begin(),arr1.end());
    for(auto i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;
    // descending order
    sort(arr1.begin(), arr1.end(),greater<int> ());
    for (auto i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(arr1.rbegin(),arr1.rend());

    //Descending order using comparator
    sort(arr1.begin(),arr1.end(),cmp);
    for (auto i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;

    
}