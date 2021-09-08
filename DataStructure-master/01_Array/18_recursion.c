//sum of n numbers using recursion
#include<stdio.h>
#include<conio.h>
int fun(int n){
    int sum;
    if(n==1)
        return n;
    sum=n+fun(n-1);
    return sum;
}
int main(){
    int n,k;
    printf("enter no upto which u find sum");
    scanf("%d",&n);
    k=fun(n);
    printf("%d",k);
return 0;
}
