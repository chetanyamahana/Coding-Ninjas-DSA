#include <bits/stdc++.h>
using namespace std;
int main(){
    //Stack:FILO:First In Last Out

    //initialize a stack
    stack<int> s;

    //Insert element at the top of the stack
    s.push(5);
    s.push(3);
    s.push(2);

    // Pop element from the top of the stack
    s.pop();

    //Top element of the stack
    int top=s.top();
    cout<<top<<endl;

    //Number of elements in the stack
    int len=s.size();
    cout<<len<<endl;

    //Print all elements from stack
    //Remove all elements from stack
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}