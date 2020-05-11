#include<stdio.h>
#include <stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node* head;
void Insert(int x){
    struct Node* temp=malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = head;
    head = temp;
}
void print(){
    struct Node* temp= head;
    printf("list is: ");
    while(temp != NULL){
      printf("%d  ",temp-> data);
      temp=temp->next;
    }
    printf("\n");
}
int main(){
     head=NULL;
     printf("how many number: ");
     int n,i,x;
     scanf("%d",&n);
     for(i=0;i<n;i++){
        printf("enter the number: ");
        scanf("%d",&x);
        Insert(x);
        print();
    }
}
