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
  
  ~Node(){
      int val = this->data;
      if(next !=NULL){
          delete next;
          next = NULL;
      }
      cout<<"memory free for with data "<<val<<endl;
  }
  
};

////////print DLL
void print(Node* head){
    Node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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

/////insert at given position
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    
    Node* temp=head;
    
    Node* node=new Node(data);
    
    int cnt=1;
    
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
    //////if insert at last position
    if(temp->next == NULL){
        insertAttail(tail,data);
        return;
    }
    
    //p1n p2n p3n
    node->next=temp->next;
    temp->next->prev=node;
    
    
    temp->next=node;
    node->prev=temp;
    
}

void deleteNode(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp=head;
        
        head=temp->next;
        temp->next->prev=NULL;
        temp->next=NULL;
    }
    else{
        
        Node* cr=head;
        Node* pv=NULL;
        int cnt=1;
        
        while(cnt<position){
            pv=cr;
            cr=cr->next;
            cnt++;
        }
        
        
        ////if position is last
        if(cr->next==NULL){
            pv->next=NULL;
            cr->prev=NULL;
            tail=pv;
            return;
        }
        
        pv->next=cr->next;
        cr->next->prev=pv;
        
        cr->next=NULL;
        cr->prev=NULL;
    }
}
int main()
{
    Node* node=new Node(10);
    
    Node* head=node;
    Node* tail=node;
    insertAttail(tail,20);
    insertAttail(tail,40);
    
    
    insertAtPosition(head,tail,30,3);
    deleteNode(head,tail,2);
    
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    

    return 0;
}
