#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
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
    }
}
