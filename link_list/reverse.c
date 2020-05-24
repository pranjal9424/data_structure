#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* Insert(struct Node* head,int data){
   struct   Node* temp =malloc(sizeof(struct Node));
   temp->data=data;
   temp->next=NULL;
   if(head==NULL)  head = temp;
   else{
    struct Node* temp1=head;
    while(temp1->next !=NULL) temp1 =temp1->next;
    temp1->next=temp;
   }
   return head;
}
void print(struct Node* head){
    while(head != NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
struct Node* Reverse(struct node* head){
       struct Node *current,*prev,*next;
       current=head;
       prev=NULL;
       while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev= current;
        current=next;
       }
       head=prev;
       return head;
}
int main(){
    struct Node* head = NULL;
    head = Insert (head,2);
    head = Insert (head,4);
    head = Insert (head,6);
    head = Insert (head,8);
    print(head);
    head=Reverse(head);
    print(head);
}













