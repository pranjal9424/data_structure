#include<stdio.h>
#include<conio.h>
int main(){
    int a[50],n,i;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("Its time to traverse the element of array:");
    for(i=1;i<=n;i++){
        printf("\n%d",a[i]);
    }
return 0;
}
