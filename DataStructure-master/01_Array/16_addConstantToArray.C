#include<stdio.h>
int main(){
    int a[5],n,num,i;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter constant to be added");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        a[i]=a[i]+num;
    }
    printf("array is:");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
return 0;
}
