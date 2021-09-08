#include<stdio.h>
int main(){
    int a[5],n,num,i,mul=1;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        mul=mul*a[i];
    }
    printf("mul of all ele of array:%d",mul);
return 0;
}

