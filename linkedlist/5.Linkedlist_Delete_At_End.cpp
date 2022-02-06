#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
/////////delete from begining
void deleteEnd(){
    Node *ptr,*prev;
    if(head == NULL){
        cout<<"List empty";
    }
    else if(head->next==NULL){
        ptr=head;
        head=NULL;
        free(ptr);
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=NULL;
        free(ptr);
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
    
    deleteEnd();
    printList(head);
    return 0;
}
