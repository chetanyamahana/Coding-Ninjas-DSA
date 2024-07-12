#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,2,3,4,5};
    cout<<"Iterate over vector: ";
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    map<int,int> m;
    m[0]=1;
    m[4]=1;
    m[2]=1;
    cout << "Iterate over map: "<<endl;
    for(auto i:m){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(8);
    cout << "Iterate over set: ";
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

}