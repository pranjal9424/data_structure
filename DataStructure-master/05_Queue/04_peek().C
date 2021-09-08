#include<stdio.h>
#define CAPACITY 5
void enqueue(int);
int queue[CAPACITY];
void peek();
int front=-1;
int rare=-1;
int main(){
    int i,ele;
    for(i=0;i<CAPACITY;i++){
        scanf("%d",&ele);
        enqueue(ele);
    }
    peek();
return 0;
}
void enqueue(int ele){
    if(front==-1 && rare==-1){
        front=rare=0;
        queue[rare]=ele;
    }
    else if(rare==CAPACITY-1){
        printf("Queue is overflow");
    }else{
        rare++;
        queue[rare]=ele;
    }
}
void peek(){
    if(front==-1 && rare==-1){
        printf("Queue is in underflow condition");
    }else{
        printf("\nValue in front of Queue is:%d",queue[front]);
    }
}
