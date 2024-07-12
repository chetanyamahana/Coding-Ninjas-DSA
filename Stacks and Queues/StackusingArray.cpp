#include <iostream>
#include <climits>
using namespace std;
class stackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    stackUsingArray(int totalsize)
    {
        data = new int[totalsize];
        nextIndex = 0;
        capacity = totalsize;
    }
    // Return the number of elements present in stack
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        /*if(nextIndex==0){
            return true;
        }else{
            return false;
        }*/
        return nextIndex == 0;
    }
    // Insert element
    void push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "Stack Full " << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    // Delete element
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};
int main()
{
    stackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
}