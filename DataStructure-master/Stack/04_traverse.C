#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
int isFull(){
    if(top==CAPACITY-1){
        return 1;
    }else{
        return 0;
    }
}
int push(int ele){
    if(isFull()){
        return 0;
    }
    else{
        top++;
        stack[top]=ele;
    }
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void traverse(){
    int ele;
    if(isEmpty()){
        printf("no element is there in stack");
    }
    else{
        int i;
        printf("Stack elements are:\n");
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    int ele,i;
    for(i=0;i<CAPACITY;i++){
        scanf("%d",&ele);
        push(ele);
    }
    traverse();
return 0;
}
