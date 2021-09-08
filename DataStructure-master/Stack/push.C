#include<stdio.h>
int capacity;
int top=-1;
int isFull(){
    if(top==capacity-1){
        return 1;
    }else{
        return 0;
    }
}
void push(int capacity){
    int stack[capacity],ele,i;
    for(i=0;i<capacity;i++){
        scanf("%d",&ele);
    }
    if(isFull()){
        printf("stack is full");
    }else{
        top++;
        stack[top]=ele;
        printf("%d",ele);
    }
}
int main(){
    scanf("%d",&capacity);
    int ele,i;
    push(capacity);
return 0;
}

