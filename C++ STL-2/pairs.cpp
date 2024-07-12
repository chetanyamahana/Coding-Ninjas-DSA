#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<string,int>> phone_book;
    phone_book.push_back({"codingNinja",1234423});
    phone_book.push_back({"codingNinja", 1234423});
    phone_book.push_back({"codingNinja", 1234423});
    cout<<"Phone-book"<<endl;
    for(auto i:phone_book){
        cout<<i.first<<" "<<i.second<<endl;
    }
}