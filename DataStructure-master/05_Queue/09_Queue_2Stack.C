#include<stdio.h>
#define N 5
void enqueue(int ele);
void dequeue();
void push1(int);
void push2(int);
int pop1();
int pop2();
void display();
int stack1[N];
int stack2[N];
int top1=-1,top2=-1;
int count=0;
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    dequeue();
    display();
return 0;
}
void enqueue(int ele){
    push1(ele);
    count++;
}
void push1(int ele){
    if(top1==N-1){
        printf("stack1 is full");
    }
    else{
      top1++;
      stack1[top1]=ele;
    }
}
void push2(int ele){
    if(top2==N-1){
        printf("stack2 is full");
    }
    else{
      top2++;
      stack2[top2]=ele;
    }
}
int pop1(){
    return stack1[top1--];
}
int pop2(){
    return stack2[top2--];
}
void dequeue(){
    int i,x;
    for(i=0;i<count;i++){
        push2(pop1());
    }
    x=pop2();
    printf("\n%d deleted",x);
    count--;
    for(i=0;i<count;i++){
        push1(pop2());
    }
}
void display(){
    for(int i=0;i<=top1;i++){
        printf("\n%d",stack1[i]);
    }
}

