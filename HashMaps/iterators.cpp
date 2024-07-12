#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main(){
    unordered_map<string,int> v;
    v["abc"]=1;
    v["abc1"] = 2;
    v["abc2"] = 3;
    v["abc3"] = 4;
    v["abc4"] = 5;
    v["ab5"] = 6;
    unordered_map<string,int>::iterator it=v.begin();
    while(it!=v.end()){
        cout<<"Key:"<<it->first<<" Value:"<<it->second<<endl;
        it++;
    }

    vector<int> vec;
    for(int i=0;i<=5;i++){
        vec.push_back(i);
    }
    vector<int>::iterator it1=vec.begin();
    while(it1!=vec.end()){
        cout<<*it1<<endl;
        it1++;
    }
    //Find
    unordered_map<string,int>::iterator it2=v.find("abc");
    v.erase(it2,it2+1);

}