#include<stdio.h>
#include<stdlib.h>
#define N 5
void traverse();
void peek();
void dequeue();
void enqueue(int ele);
int queue[N];
struct node{
    int data;
    struct node *link;
};
struct node *front=NULL;
struct node *rare=NULL;
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    traverse();
    peek();
    dequeue();
    dequeue();
    dequeue();
    peek();
    traverse();
return 0;
}
void enqueue(int ele){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->link=NULL;
    if(front==NULL && rare==NULL){
        front=rare=temp;
    }
    else{
        rare->link=temp;
        rare=temp;
        rare->link=front;
    }
}
void traverse(){
    struct node *temp;
    if(front==NULL && rare==NULL){
        printf("\nQueue is empty");
    }
    else{
        temp=front;
        while(temp->link!=front){
            printf("\n%d",temp->data);
            temp=temp->link;
        }
        printf("\n%d",temp->data);
    }
}
void peek(){
    if(front==NULL && rare==NULL){
        printf("\nQueue is already empty");
    }
    else{
        printf("\nElement at the front of Queue=%d",front->data);
    }
}
void dequeue(){
    struct node *temp;
    temp=front;
    if(front==NULL && rare==NULL){
        printf("Queue is already empty");
    }
    else if(front==rare){
        printf("\n%d deleted",front->data);
        front=rare=NULL;
    }
    else{
        printf("\n%d deleted",front->data);
        front=temp->link;
        rare->link=front;
        free(temp);
    }
}
