#include<stdio.h>
#include<conio.h>
int main(){
    int a[20],i,x,p,n;
    printf("enter size of array");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("array is:");
    for(i=1;i<=n;i++){
        printf("%d",a[i]);
    }
    printf("enter the index of delete element:");
    scanf("%d",&p);
    x=a[p];
    for(i=p;i<=n;i++){
        a[i]=a[i+1];
    }
    n=n-1;
    printf("new array after deletion:");
    for(i=1;i<=n;i++){
        printf("\n%d",a[i]);
    }
return 0;
}
