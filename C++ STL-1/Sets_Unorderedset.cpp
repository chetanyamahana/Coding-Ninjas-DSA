#include <bits/stdc++.h>
using namespace std;
int main(){
    //Initialize a set and unordered set 
    set<int> s;
    unordered_set<int> us;
    
    //insert element into set and unordered set
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);

    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(2);

    //Number of elements in the set
    int len=s.size();
    cout<<len<<endl;

    //Front and back element of the set
    int front=*s.begin();
    int back=*(--s.end());
    cout<<front<<" "<<back<<endl;

    //check if a particular element is present in the set
    int c1=s.count(2);
    if(c1==0){
        cout<<"not present in the set!"<<endl;
    }else{
        cout<<"present in the set!"<<endl;
    }
    //Possible values of count will be 1 and 0
    //TC of count function is O(LogN)

    //Remove element from the set
    s.erase(3);//To remove specified element 
    s.erase(s.begin());//To remove first element

    //clear the set
    s.clear();
    cout<<s.size()<<" ";
    cout<<"\n";
}