#include<stdio.h>
#define CAPACITY 5
void push(int ele);
int isFull();
int pop();
int isEmpty();
void peek();
void traverse();
int stack[CAPACITY],top=-1;
int main(){
    int ch,ele,res;
    while(1){
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Traverse\n");
        printf("5.Quit\n");

        printf("\nenter your Choice:");
        scanf("%d",&ch);

        switch(ch){
            case 1:printf("enter element to push");
                   scanf("%d",&ele);
                   push(ele);
                   break;
            case 2:res=pop();
                   if(res==0){
                    printf("\n Stack is underflow\n");
                   }else{
                     printf("%d\n",res);
                   }
                   break;
            case 3:peek();
            case 4:traverse();
            case 5:exit(0);
            default:printf("Invalid Input\n");
        }
    }
return 0;
}
void push(int ele){
    if(isFull()){
            printf("stack is overflow");
    }else{
        top++;
        stack[top]=ele;
        printf("%d Pushed\n",ele);
    }
}
int isFull(){
    if(top==CAPACITY-1){
        return 1;
    }else{
        return 0;
    }
}
int pop(){
    int ele;
    if(isEmpty()){
       return 0;
    }else{
        ele=stack[top];
        top--;
        return (ele);
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
void peek(){
 if(isEmpty()){
    printf("Stack is empty");
 }
 else{
    printf("%d\n",stack[top]);
 }
}
void traverse(){
    if(isEmpty()){
        printf("No element to traverse Stack is empty");
    }
    else{
        int i;
        for(i=0;i<=top;i++){
            printf("%d\n",stack[i]);
        }
    }
}
