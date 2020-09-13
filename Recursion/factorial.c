#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    k=fact(n);
    printf("%d",k);
}
int fact(int n)
{
    if(n>0)
    {
        return n*fact(n-1);
    }
    else
        return 1;
}
