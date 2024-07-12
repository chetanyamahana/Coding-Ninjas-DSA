#include <iostream>
using namespace std;
#include "Node.cpp"

void print(Node *head){
    Node *temp=head;
//Use temp as using head will lost the entire linked list
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
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
//head as passed a copy to function so main head will not change value

    print(head);

}