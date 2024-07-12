#include <bits/stdc++.h>
using namespace std;
int main(){
    //Queue:FIFO:First In First Out

    //initialize a queue
    queue<int> q;

    //insert element from the back of queue
     q.push(5);
     q.push(3);
     q.push(2);

     // pop element from the front of queue
     q.pop();

     // Front and Back elements of queue
     int first = q.front();
     int back = q.back();
     cout << first << " " << back << "\n";

     //Number of elements in queue
     int len = q.size();
    cout<<len<<endl;

    //Print all elements from queue
    //remove all elements from the queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

}