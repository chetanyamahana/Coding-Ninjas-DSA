#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5}; // Cannot Change Size

    //initialize array
    array<int,5> arr1;//Initializes array consisting of 5 elements with 5 zeros(0)
    array<int, 5> arr2 = {1, 2, 3, 4, 5};
    array<int, 10> arr3 = {1, 2, 3, 4, 5};//Rest all elements will be 0

    //number of elements in the array
    int len = arr2.size();
    cout<<len<<"\n";

    //fill all 1 in arr1
    arr1.fill(1);

    //Printing all elements in array
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    //To check if array is empty
    bool isEmpty = arr1.empty();
    cout<<isEmpty<<"\n";

    //Front and Back elements of array
    int first=arr2.front();
    int last=arr2.back();
    cout<<first<<" "<<last<<"\n";

}