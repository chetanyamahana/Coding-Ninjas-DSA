#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Dequeue:Double Ended Queue
    //Can push and pop elements from both the ends

    // initialize a deque
    deque<int> dq;

    // insert element from the front & back of deque
    dq.push_front(5);
    dq.push_front(6);
    dq.push_back(1);
    dq.push_back(2);

    // pop element from the front & back of deque
    dq.pop_front();
    dq.pop_back(); 

    // Front and Back elements of deque
    int first = dq.front();
    int back = dq.back();
    cout << first << " " << back << "\n";

    // Number of elements in deque
    int len = dq.size();
    cout << len << endl;

    // Print all elements from deque using iterators
    for(auto i = dq.begin();i!=dq.end();i++){
        cout<<*i<<" ";
    }
    cout << endl;

    // remove all elements from the queue
    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;
}