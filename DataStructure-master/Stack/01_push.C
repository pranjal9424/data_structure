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
            //printf("%d",ele);
        }
    }
int main(){
    int ele,i;
    for(i=0;i<capacity;i++){
        scanf("%d",&ele);
        push(ele);
    }
    printf("%d",stack[top]);
return 0;
}
