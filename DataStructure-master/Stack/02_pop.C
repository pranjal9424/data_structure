#include<stdio.h>
int capacity=5;
int stack[5];
int top=-1;
int t=capacity-1;
int top1=t;
int isFull(){
    if(top==capacity-1){
        return 1;
    }
    else{
        return 0;
    }

}
void push(int ele){
    if(isFull()){
        printf("stack is already filled");
    }else{
        top++;
        stack[top]=ele;
        //printf("%d",ele);
    }
}
int isEmpty(){
    if(top1==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int pop(){
    int ele;
    if(isEmpty()){
        printf("Stack is already empty");
    }else{
        ele=stack[top1];
        top1--;
    }
    return (ele);
}
int main(){
    int ele,i,res;
    for(i=0;i<capacity;i++){
        scanf("%d",&ele);
        push(ele);
    }
     printf("Value at the top of stack=%d\n",stack[top]);
    for(i=0;i<capacity;i++){
        res=pop();
        printf("\n%d",res);
    }
return 0;
}
