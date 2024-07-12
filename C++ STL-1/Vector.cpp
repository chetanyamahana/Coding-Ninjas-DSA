#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Vectors: Dynamic Array
    //Static Size Container
    int arr[10];

    //Dynamic Size Container=Vector
    //Intialization
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2;
    vector<int> arr3(10);
    vector<int> arr4(10,1);

    //nested Vectors
    vector<vector<int>> arr5(10,vector<int>(10,5));
    vector<vector<string>> arr6(10, vector<string>(10, "CN"));

    //Size of vector
    cout<<arr1.size()<<endl;
    cout << arr2.size() << endl;
    cout << arr3.size() << endl;

    //Printing all elements in Vector
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\n";

    //Because it is a dynamic container, can insert element during runtime
    arr1.push_back(6);
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\n";

    //Remove element from back of arr2
    arr1.pop_back();
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\n";
    // Front and Back elements of array
    int first = arr1.front();
    int last = arr1.back();
    cout << first << " " << last << "\n";

    //Clear all elements from the vector
    arr1.clear();

    // To check if array is empty
    bool isEmpty = arr1.empty();
    cout << isEmpty << "\n";
}