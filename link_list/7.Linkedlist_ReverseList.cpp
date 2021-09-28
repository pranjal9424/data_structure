#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
/////////Reverse linkList
void ReverseList(){
    Node *prev,*next,*curr;
    
    prev=NULL;
    curr=head;
    while(curr !=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
    head=prev;
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
    
    ReverseList();
    printList(head);
    return 0;
}
