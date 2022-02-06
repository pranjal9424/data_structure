#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
/////////insert at begining
void insertBeg(int d){
    Node *ptr = new Node();
    ptr-> data=d;
    ptr-> next=head;
    head=ptr;
}

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node* first=NULL;
    Node* second = NULL;
    Node* third = NULL;
 
    first = new Node();
    second = new Node();
    third = new Node();
 
    first->data = 1; 
    first->next = second;
 
    second->data = 2; 
    second->next = third;
 
    third->data = 3; 
    third->next = NULL;
    head=first;
    
    insertBeg(4);
    printList(head);
    return 0;
}
