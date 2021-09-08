#include<stdio.h>
#define CAPACITY 5
void enqueue(int ele);
void dequeue();
void traverse();
//void dequeue();
int queue[CAPACITY];
int front=-1;
int rare=-1;
int main(){
    int i,ele;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    traverse();
    dequeue();
    dequeue();
    enqueue(100);
    enqueue(200);
    traverse();
return 0;
}
void enqueue(int ele){
    if(front==-1 && rare==-1){
        front=rare=0;
        queue[rare]=ele;
    }
    else if((rare+1)%CAPACITY==front){
        printf("\n Queue is Full");
    }
    else{
        rare=(rare+1)%CAPACITY;
        queue[rare]=ele;
    }
}
void traverse(){
    int i=front;
    if(front==-1 && rare==-1){
        printf("\nQueue is already empty");
    }else{
        while(i!=rare){
            printf("\n%d",queue[i]);
            i=(i+1)%CAPACITY;
        }
        printf("\n%d",queue[rare]);
    }
}
void dequeue(){
    if(front==-1 && rare==-1){
        printf("\nQueue is already empty");
    }
    else if(front==rare){
        printf("\n%d deleted",queue[front]);
        front=rare=-1;
    }
    else{
        printf("\n%d deleted",queue[front]);
        front=(front+1)%CAPACITY;
    }
}

