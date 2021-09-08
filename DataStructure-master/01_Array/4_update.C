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
    printf("enter the index and updated element");
    scanf("%d%d",&p,&x);
    a[p]=x;
    printf("new array after updation");
    for(i=1;i<=n;i++){
        printf("\n%d",a[i]);
    }
return 0;
}
