#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
    ~Node() {
        int value = this-> data;
        
        if(this -> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<endl<<"memory is free for node with data "<< value << endl;
    }
};

//// insert at end
void inserAtTail(Node* &tail,int data){
   Node* node=new Node(data);
   tail->next=node;
   tail=node;
}

////insert at start
void inserAtHead(Node* &head,int data){
    Node* node=new Node(data);
    
    node->next=head;
    head=node;
}

////insert at postion
void insertAtPosition(Node* &tail,Node* &head,int postion,int data){
    
    //insert at first postion
    if(postion==1){
        inserAtHead(head,data);
        return;
    }
    Node* node=new Node(data);
    int crnt=1;
    
    Node* temp=head;
    while(crnt<postion-1){
        temp=temp->next;
        crnt++;
    }
    
    ///inser at last postion
    if(temp->next == NULL){
        inserAtTail(tail,data);
        return;
    }
    
    
    node->next=temp->next;
    temp->next=node;
}

/// deletition of node
void deleteAtposition (int postion,Node* &head,Node* &tail){
    
    
    if(postion==1){
        
        /////delete from postion first
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        
        ////////delte from any Node except first
        Node* curr=head;
        Node* prev=NULL;
        
        int cnt=1;
        while(cnt < postion){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        
        prev->next=curr->next;
        if(prev->next == NULL){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
        
    }
}

/////print LL
void print(Node* &head){
    Node* temp=head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node* node1=new Node(10);
    
    Node* head=node1;
    Node* tail=node1;
    inserAtTail(tail,20);
    inserAtTail(tail,30);
    insertAtPosition(tail,head,4,40);
    print(head);
    
    
    
    deleteAtposition(4,head,tail);
    print(head);
    
    cout<<endl<<"head- "<<head->data;
    cout<<endl<<"tail- "<<tail->data;

    return 0;
}
