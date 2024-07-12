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
class QueueusingLL
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    QueueusingLL()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    // Insert Element
    void enqueue(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            size++;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            size++;
        }
        return;
    }
    T front()
    {
        if (isEmpty())
        {
            //cout << "Queue is empty!" << endl;
            return 0;
        }
        return head->data;
    }
    T dequeue()
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
};
int main()
{
    QueueusingLL<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(10);
    cout << q.front() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;
}