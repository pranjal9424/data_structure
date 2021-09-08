#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void push(int ele);
int stack[CAPACITY];
void traverse();
struct node{
    int data;
    struct node *link;
};
struct node *top=NULL;
int main(){
    int ele,i;
    for(i=0;i<CAPACITY;i++){
        scanf("%d",&ele);
        push(ele);
    }
    traverse();
return 0;
}
void push(int ele){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->link=top;
    top=temp;
}
int isEmpty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void traverse(){
    struct node *temp=NULL;
    if(isEmpty()){
        printf("\nStack is already empty");
    }
    else{
        temp=top;
        printf("\nElements in stack are");
        while(temp!=NULL){
            printf("\n%d",temp->data);
            temp=temp->link;
        }
    }
}
