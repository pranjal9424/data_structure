#include <stdio.h>
int power(int n1, int n2);
int main()
{
    int base,k,result;
    printf("enter power base");
    scanf("%d",&base);
    printf("enter power");
    scanf("%d",&k);
    result=power(base,k);
    printf("%d",result);
}
int power(int b,int k)
{
    if(k!=0)
    {
        return (b*power(b,k-1));
    }
    else
        return 1;
}
