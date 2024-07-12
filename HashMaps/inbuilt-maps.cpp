#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
    unordered_map <string,int> ourmap;
    //insert
    pair<string,int> p("abc",1);
    ourmap.insert(p);
    ourmap["def"]=2;

    //Find or Access
    cout<<ourmap["def"]<<endl;
    cout<<ourmap.at("def")<<endl;
    //cout << ourmap.at("ghi") << endl; Ecxeption Error
    cout<<"size:"<<ourmap.size()<<endl;
    cout << ourmap["ghi"] << endl;//[] will insert 0 for non-existing key and return 0
    cout << "size:" << ourmap.size() << endl;
    //To check if a key is present or not
    
    //Check Presense
    if(ourmap.count("ghi")>0){
        cout<<"ghi is present"<<endl;
    }

    //erase 
    ourmap.erase("ghi");
    if (ourmap.count("ghi") > 0)
    {
        cout << "ghi is present" << endl;
    }
    cout << "size:" << ourmap.size() << endl;
}