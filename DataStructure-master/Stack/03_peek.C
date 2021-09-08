#include<stdio.h>
int capacity=6;
int stack[6];
int top=-1;

int isFull(){
    if(top==capacity-1){
        return 1;
    }else{
        return 0;
    }
}
void push(int ele){
        if(isFull()){
            printf("stack is full");
        }else{
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
int peek(){
    if(isEmpty()){
        return 0;
    }else{
        return stack[top];
    }
}
int main(){
    int ele,i,res ;
    for(i=0;i<capacity;i++){
        scanf("%d",&ele);
        push(ele);
    }
    res=peek();
    printf("%d",res);
return 0;
}

