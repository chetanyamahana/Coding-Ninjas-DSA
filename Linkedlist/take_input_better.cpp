#include <iostream>
using namespace std;
#include "Node.cpp"
Node* takeInput_Better()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail=NULL;
    while (data != -1)
    {
        // Node n(data);
        // Static allocation will result in errors as everytime new node is created previous nodes get deleted
        // Therefore we need to use dynamic allocation
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            //head->next = newNode;
            tail=newNode;
            // Because we are using dynamic allocation thus there is no need to write & amplication
        }
        else
        {
            /*Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;*/
            tail->next=newNode;
            tail=tail->next;
            //or
            //tail=newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    // Use temp as using head will lost the entire linked list
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{ /*
     // Statically

     Node n1(1);
     Node *head = &n1;

     Node n2(2);
     n1.next = &n2;

     Node n3(3);
     n2.next = &n3;

     Node n4(4);
     n3.next = &n4;

     Node n5(5);
     n4.next = &n5;

     print(head);
     // head as passed a copy to function so main head will not change value

     print(head);*/
    Node *head = takeInput_Better();
    print(head);
}