//Greatest comman divisor by recursion
#include<stdio.h>
#include<conio.h>
int GCD(int a,int b){
    if(a==b)
        return a;   //return b;
    if(a%b==0)
        return b;
    if(b%a==0)
        return a;
    if(a>b)
        return (GCD(a%b,b));
    else
        return (GCD(a,b%a));
}
int main(){
    int a,b,res;
    printf("enter a,b");
    scanf("%d%d",&a,&b);
    res=GCD(a,b);
    printf("Greatest Comman Factor is=%d",res);
    getch();
return 0;
}
