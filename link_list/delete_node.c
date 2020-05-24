#include<stdio.h>>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    print();
    int n;
    printf("enter a position: ");
    scanf("%d",&n);
    Delete(n);
    print();
}
void Delete(int n){
     struct Node* temp1 = head;
     if(n==1){
        head = temp1->next;
        free(temp1);
        return;
     }
     int i;
     for(i=0;i<n-2;i++)
        temp1 = temp1->next;
        struct Node* temp2=temp1->next;
        temp1->next = temp2->next;
        free(temp2);
}
void Insert(int x){
struct Node* temp=malloc(sizeof(struct Node));
temp -> data=x;
temp -> next=head;
head=temp;
}
void print(){
struct Node* temp=head;
printf("list is: ");
while(temp != NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
}















