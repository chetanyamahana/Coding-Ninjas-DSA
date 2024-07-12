#include <bits/stdc++.h>
using namespace std;
struct cmp{
    public:
        bool operator()(int &a,int &b){return a>b;}
};

int main()
{
   //Initialize a priority-queue
   //max-heap priority queue
   //By default
   priority_queue<int> pq_max;
    //min-heap priority queue
    priority_queue<int,vector<int>,greater<int>> pq_min;
    // min-heap priority queue using comparator function
    priority_queue<int, vector<int>, cmp> pq_min2;
    //Insert elements in the priority queue
    pq_max.push(1);
    pq_max.push(3);
    pq_max.push(4);
    pq_max.push(6);

    pq_min.push(1);
    pq_min.push(3);
    pq_min.push(4);
    pq_min.push(6);
    //Number of elements in the priority queue
    int sz=pq_max.size();
    cout<<"Number of elements in pq_max:"<<sz<<"\n";

    //Top element of the priority queue
    int val=pq_max.top();
    cout<<"Top element:"<<val<<"\n";

    //Pop the top element of the priority queue 
    pq_max.pop();

    //Print all values in the priority queue
    while(pq_max.empty()!=true){
        int val=pq_max.top();
        cout << "Top element:" << val << "\n";
        pq_max.pop();
    }

}