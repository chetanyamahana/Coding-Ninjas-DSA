#include <iostream>
#include <climits>
using namespace std;
template <typename T>
class stackUsingArray
{
    T *data;
    int nextIndex;
    int capacity;

public:
    stackUsingArray()
    {
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
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
    void push(T element)
    {
        if (nextIndex == capacity)
        {
            T *newData=new T[capacity*2];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            capacity*=2;
            delete[] data;
            data=newData;       
            /*cout << "Stack Full " << endl;
            return;*/
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    // Delete element
    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return 0;
            // 0 is Ascii value of NULL 
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }
};
int main()
{
    stackUsingArray<int> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
}