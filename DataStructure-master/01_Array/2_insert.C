#include<stdio.h>
#include<conio.h>
int main(){
    int a[10],i,n,p,x;
    printf("enter size of arry:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("elements are:");
    for(i=1;i<=n;i++){
        printf("\n%d",a[i]);
    }
    printf("insert new element and index:");
    scanf("%d%d",&x,&p);
    n=n+1;
    for(i=n;i>=p;i--){
        a[i+1]=a[i];
    }
    a[p]=x;
    printf("final array:");
    for(i=1;i<=n;i++){
        printf("%d",a[i]);
    }
return 0;
}
