#include <bits/stdc++.h>
using namespace std;
int main(){
    //Initialize a map,unordered_map & multimap
    map<string,int> mp1;
    unordered_map<string,int> mp2;
    multimap<string,int> mp3;

    //Insert elements in the maps
    mp1["codingNinja"]=12345;
    mp1["codingBuddy"]=12543;
    mp1["codingDudues"]=15243;

    mp2["codingNinja"] = 12345;
    mp2["codingBuddy"] = 12543;
    mp2["codingDudues"] = 15243;

    mp3={{"codingNinja",12345},{"codingBuddy",12543},{"codingDudes",15243}};

    //accesing value using keys
    int val1=mp1["codingNinja"];
    cout<<val1<<endl;

    //number of key-value pair in the map
    int sz=mp1.size();
    cout<<sz<<endl;

    //check if a key is present in the map
    int c1=mp1.count("codingNinja");
    if(c1==0){
        cout<<"Key is not present in the map";
    }else{
        cout<<"key is present in the map";
    }

    //Iterate over all key value pair in the map
    for(auto i:mp1){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //erase a key-value pair from the map
    mp1.erase("codingNinja");

    //clear the map
    mp1.clear();
}