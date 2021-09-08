#include<stdio.h>
#define CAPACITY 5
void enqueue(int ele);
void dequeue();
int queue[CAPACITY];
int front=-1;
int rare=-1;
int main(){
    int i,ele;
    for(i=0;i<CAPACITY;i++){
        scanf("%d",&ele);
        enqueue(ele);
    }
    printf("\nDeleted elements are:");
    for(i=0;i<CAPACITY;i++){
        dequeue();
    }
return 0;
}
void enqueue(int ele){
    if(rare==CAPACITY-1){
        printf("Queue is in overflow condition");
    }
    else if(front==-1 && rare==-1){
        front=rare=0;
        queue[rare]=ele;
    }
    else{
        rare++;
        queue[rare]=ele;
    }
}
void dequeue(){
    if(front==-1 && rare==-1){
        printf("Queue is already in underflow condition");
    }
    else if(front==rare){
        printf("\n%d deleted",queue[front]);
        front=rare=-1;
    }
    else{
        printf("\n%d deleted",queue[front]);
        front++;
    }
}

