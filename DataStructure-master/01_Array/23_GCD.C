//Greatest comman divisior withour recursion
#include<stdio.h>
#include<conio.h>
int main(){
    int m,n,i,check,max=0;
    printf("enter a,b");
    scanf("%d%d",&m,&n);
    if(m>n)
        check=m;
    else
        check=n;
    for(i=1;i<=check;i++){
        if(m%i==0 && n%i==0)
            max=i;
    }
    printf("greatest comman divisor:%d",max);
return 0;
}
