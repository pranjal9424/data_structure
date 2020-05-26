#include<stdio.h>
#include<conio.h>
#define MAX 101
int a[MAX];
int top=-1;
void Push(int x){
   if(top == MAX-1){
    printf("error: stack overflow\n");
    return;
   }
   a[++top]=x;
}
void Pop(){
     if(top==-1){
        printf("error: no element to pop\n");
        return;
     }
     top--;
}
int Top(){
    return a[top];
}
int main(){
   Push(2);Print();
   Push(5);Print();
   Push(10);Print();
   Pop();Print();
   int k=Top();
   printf("Top %d \n",k);
   Push(12);Print();
}
void Print(){
    int i;
    printf("stack ");
    for(i=0;i<=top;i++)
        printf("%d ",a[i]);
    printf("\n");

}
