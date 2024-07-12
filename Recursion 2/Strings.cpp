#include <iostream>
using namespace std;
int main(){
    string *sp =new string;
    *sp="def";
    cout<<*sp<<endl;
    string s="abc";
    cout<<s<<endl;
    string s1;
    s1="def";
    //cin>>s1;
    getline(cin,s);
    cout<<s1<<endl;
    cout<<s<<endl;
    string s2=s+s1;
    s+=s1;
    cout<<s2<<endl;
    cout<<s.size()<<endl;
    cout<<s.substr(3)<<endl;
    cout << s.substr(3,3) << endl;
    cout<<s.find("a")<<endl;
}