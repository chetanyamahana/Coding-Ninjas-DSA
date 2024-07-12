#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //getline(cin,s);
    cout<<"Length: "<<s.length()<<endl;
    cout<<s<<endl;
    s.push_back('a');
    cout<<"New string after appending character: "<<s<<endl;

    s.pop_back();
    cout << "New string after appending character: "<<s<<endl;

    cout<<"Actual String: "<<s<<endl;
    cout<<s.substr(0,0)<<endl;
    cout << s.substr(0, 2) << endl;
    cout << s.substr(2, 2) << endl;
    cout << s.substr(0, 10) << endl;
}