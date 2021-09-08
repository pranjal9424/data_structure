//fabonacci by recursion
#include<stdio.h>
#include<conio.h>
int fab(int n);
int fab(int n){
    if(n==0 || n==1)
        return n;
    else
        return fab(n-1)+fab(n-2);
}
int main(){
    int n,i,f;
    printf("enter size of series");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        f=fab(i);
        printf("%d",f);
    }
return 0;
}
