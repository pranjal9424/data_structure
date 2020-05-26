#include<stdio.h>
#include<stdlib.h>
struct Node{
     int data;
     struct Node* next;
     struct Node* prev;
};
struct Node* head;
struct Node* GetNewNode(int x){
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void InsertAtHead(int x){
    struct Node* newNode = GetNewNode(x);
    if(head == NULL){
        head =newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}
void Print(){
   struct Node* temp=head;
   printf("forward: ");
   while(temp !=NULL){
       printf("%d ",temp->data);
       temp = temp->next;
   }
   printf("\n");
}
void ReversePrint(){
     struct Node* temp=head;
     if(temp ==NULL) return; //empty list ,exit
     // Going to last node
     while(temp->next != NULL){
        temp = temp-> next;
     }
     //Traversing background using prev pointer
     printf("Reverse: ");
     while (temp != NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
     }
     printf("\n");
}
int main(){
   head = NULL;
   InsertAtHead(2);Print();ReversePrint();
   InsertAtHead(4);Print();ReversePrint();
   InsertAtHead(6);Print();ReversePrint();
}
