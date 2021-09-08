#include<stdio.h>
#define CAPACITY 5
void enqueue(int);
int queue[CAPACITY];
int front=-1;
int rare=-1;
int main(){
    int i,ele;
    for(i=0;i<CAPACITY;i++){
        scanf("%d",&ele);
        enqueue(ele);
    }
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
