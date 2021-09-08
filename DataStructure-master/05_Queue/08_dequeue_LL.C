#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void traverse();
void dequeue();
void enqueue(int ele);
int queue[CAPACITY];
struct node{
    int data;
    struct node *link;
};
struct node *front=NULL;
struct node *rare=NULL;
int main(){
    int i,ele;
    for(i=0;i<CAPACITY;i++){
        scanf("%d",&ele);
        enqueue(ele);
    }
    printf("elements in Queue are:");
    traverse();
    printf("\nNow elements are deleted");
    for(i=0;i<CAPACITY;i++){
        dequeue();
    }
    traverse();
return 0;
}
void enqueue(int ele){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    temp->data=ele;
    if(front==NULL && rare==NULL){
        front=rare=temp;
    }
    else{
        rare->link=temp;
        rare=temp;
    }
}
void traverse(){
    struct node *temp;
    if(front==NULL && rare==NULL){
        printf("\nno element in the Queue");
    }else{
        temp=front;
        while(temp!=NULL){
            printf("\n%d",temp->data);
            temp=temp->link;
        }
    }
}
void dequeue(){
    struct node *temp;
    if(front==NULL && rare==NULL){
        printf("Queue is already empty");
    }
    else{
        temp=front;
        printf("\n%d is deleted",temp->data);
        front=temp->link;
    }
}
