/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Node{
  
  public:
  int data;
  Node* next;
  Node* prev;
  
  Node(int x){
      this->data=x;
      this->next=NULL;
      this->prev=NULL;
  }
  
};

////////print DLL
void print(Node* head){
    Node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

////insert in DLL from head
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    
    temp->next=head;
    head->prev=temp;
    head=temp;
}

////insert in DLL from tail
void insertAttail(Node* &tail,int data){
    Node* temp=new Node(data);
    
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
int main()
{
    Node* node=new Node(10);
    
    Node* head=node;
    Node* tail=node;
    insertAttail(tail,20);
    insertAttail(tail,30);
    
    print(head);

    return 0;
}
