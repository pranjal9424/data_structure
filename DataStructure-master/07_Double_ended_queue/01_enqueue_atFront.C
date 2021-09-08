//Complete code for all the operations in double Queue.
#include<stdio.h>
#define N 5
void getFront();
void getRare();
void enqueueAtFront(int ele);
void enqueueAtRare(int ele);
void dequeueFromFront();
void dequeueFromRare();
void display();
int dequeue[N];
int front=-1;
int rare=-1;
int main(){
    enqueueAtFront(10);
    enqueueAtFront(20);
    getFront();
    enqueueAtRare(30);
    enqueueAtRare(40);
    enqueueAtFront(50);
    enqueueAtFront(60);
    getFront();
    getRare();
    dequeueFromFront();
    dequeueFromFront();
    dequeueFromRare();
    display();
return 0;
}
void enqueueAtFront(int ele){
 if((front==0 && rare==N-1) || front==rare+1){
    printf("\nDequeue is already full");
 }
 else if(front==-1 && rare==-1){
    front=rare=0;
    dequeue[front]=ele;
 }
 else if(front==0){
    front=N-1;
    dequeue[front]=ele;
 }
 else{
    front--;
    dequeue[front]=ele;
 }
}
void display(){
    if(front==-1 && rare==-1){
        printf("\ndequeue is already empty");
    }
    else{
       int i=front;
        while(i!=rare){
            printf("\n%d",dequeue[i]);
            i=(i+1)%N;
        }
        printf("\n%d",dequeue[rare]);
    }
}
void getFront(){
    if(front==-1 && rare==-1){
        printf("\n dequeue is already empty");
    }
    else{
        printf("\nfront value of deque is=%d",dequeue[front]);
    }
}
void getRare(){
    if(front==-1 && rare==-1){
        printf("\n dequeue is already empty");
    }
    else{
        printf("\nvalue at rare end in dequeue=%d",dequeue[rare]);
    }
}
void enqueueAtRare(int ele){
    if((front==0 && rare==N-1) || front==rare+1){
        printf("\nDequeue is already full");
    }
    else if(front==-1 && rare==-1){
        front=rare=0;
        dequeue[rare]=ele;
    }
    else if(rare==N-1){
        dequeue[rare]=ele;
    }
    else{
        rare++;
        dequeue[rare]=ele;
    }
}
void dequeueFromFront(){
    if(front==-1 && rare==-1){
        printf("\ndequeue is alredy empty");
    }
    else if(front==rare){
        printf("\n%d is only element in queue deleted",dequeue[front]);
        front=rare=-1;
    }
    else if(front==N-1){
        printf("\n%d deleted",dequeue[front]);
        front=0;
    }
    else{
        printf("\n%d deleted",dequeue[front]);
        front++;
    }
}
void dequeueFromRare(){
    if(front==-1 && rare==-1){
        printf("\ndequeue is alredy empty");
    }
    else if(front==rare){
        printf("\n%d is only element in queue deleted",dequeue[rare]);
        front=rare=-1;
    }
    else if(rare==0){
        printf("\n%d deleted",dequeue[rare]);
        rare=N-1;
    }
    else{
        printf("\n%d deleted",dequeue[rare]);
        rare--;
    }
}
