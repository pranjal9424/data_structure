//fabonacci by without recutrsion
#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,fir,sec,sum=0;
    printf("enter size of series");
    scanf("%d",&n);
    fir=0,sec=1;
    printf("%d\t",fir);
    printf("%d\t",sec);
    for(i=3;i<=n;i++){
         sum=fir+sec;
        printf("%d\t",sum);
        fir=sec;
        sec=sum;
    }
return 0;
}
