#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> *vp = new vector<int>();//Dynamic Allocation
    vector<int> v; // Static Allocation
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v[0] << endl;
    v[0] = 100;
    cout << v[0] << endl;
    cout << "Size:" << v.size() << endl;
    cout << v.at(0) << endl;
    // cout << v.at(6) << endl;:outofrange

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}