#include <iostream>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};
template <typename T>
// We need to specify this line again and again
class Stack
{
    Node<T> *head;
    int size; // Number of elements present in stack
public:
    Stack()
    {
        head = NULL;
        size = 0;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        if (size == 0)
        {
            return true;
        }
        return false;
    }
    void push(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }
    T pop()
    {
        if (head == NULL)
        {
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
    T top()
    {
        if (head == NULL)
        {
            return 0;
        }
        return head->data;
    }
};
int main()
{
    Stack<int> st;
    int q;
    cin >> q;
    while (q > 0)
    {
        int choice, input;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> input;
            st.push(input);
            break;
        case 2:
            cout << st.pop() << "\n";
            break;
        case 3:
            cout << st.top() << "\n";
            break;
        case 4:
            cout << st.getSize() << "\n";
            break;
        default:
            cout << ((st.isEmpty()) ? "true\n" : "false\n");
            break;
        }
        q--;
    }
}