#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Initialize a multiset
    multiset<int> ms;//increasing order
    multiset<int,greater<int>> ms2;//decreasing order

    // insert element into set and unordered set
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(2);

    //Iterate over the elements in multiset
    for(auto i:ms){
        cout<<i<<" ";
    }
    cout<<endl;

    // Number of elements in the set
    int len = ms.size();
    cout << len << endl;

    // Front and back element of the set
    int front = *ms.begin();
    int back = *(--ms.end());
    cout << front << " " << back << endl;

    // check if a particular element is present in the set
    int c1 = ms.count(2);
    if (c1 == 0)
    {
        cout << "not present in the set!" << endl;
    }
    else
    {
        cout << "present in the set!" << endl;
    }
    // Possible values of count will be 1 and 0
    // TC of count function is O(LogN)

    // Remove element from the set
    ms.erase(2);         // To remove all the instances of specified element
    //ms.erase(ms.begin()); // To remove first element

    //erase only one occurence of an instance from multiset
    ms.erase(ms.find(2));

    // clear the set
    ms.clear();
    cout << ms.size() << " ";
    cout << "\n";
}