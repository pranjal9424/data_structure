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
    
    if(tail == NULL){
        Node* node=new Node(data);
        node->next=node;
        tail=node;
        return;
    }
    else{
        
   Node* node=new Node(data);
   
   node->next=tail->next;
   tail->next=node;
   tail=node;
    }
}

/////print circular LL
void print(Node* tail){
    Node* temp=tail;
    int curr=1;
    if(tail == NULL){
        cout<<"list is empty";
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
        curr++;
    }while(tail != temp );
    
    cout<<endl;
}

///delete Node from circular LL
void deleteAt(Node* &tail,int del){
    
    Node* pr=tail;
    Node* cr=pr->next;
    
    while(cr->data != del){
        pr=cr;
        cr=cr->next;
    }
    
	///if one node
    if(tail==pr){
        tail=NULL;
    }
    
    else if(tail==cr){
        tail=pr;
    }
    pr->next=cr->next;
    cr->next=NULL;
}
int main()
{
    
    Node* tail=NULL;
    
    inserAtTail(tail,10);
    inserAtTail(tail,20);
    /*inserAtTail(tail,30);
    inserAtTail(tail,40);
    inserAtTail(tail,50);
    */
    deleteAt(tail,20);
    print(tail);

    return 0;
}
