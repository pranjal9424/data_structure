#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    scanf("%d",&i);
    for(n=1;n<=i;n++)
    {
            printf(" %d",fib(n));
    }
}
int fib(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else
        return (fib(n-1) + fib(n-2));
}
