//Factorial using recursion function
#include<stdio.h>
#include<conio.h>
int fact(int n){
    int res;
    if(n==1)
        return 1;
    res=n*fact(n-1);
    return res;
}
int main(){
    int n,res;
    printf("enter any number");
    scanf("%d",&n);
    res=fact(n);
    printf("%d",res);
return 0;
}
