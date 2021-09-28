#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
/////////middle element in linkedList
void MiddleElement(){
    Node *slow=head;
    Node *fast=head;

    if(head == NULL){
        cout<<"List empty";
    }
    else {
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<"MiddleElement "<<slow->data;
    }
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
    
    MiddleElement();
    return 0;
}
