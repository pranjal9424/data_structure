#include<stdio.h>
#include<conio.h>
int main(){
    int a[10],i,j,n,temp;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("array is");
    for(i=1;i<=n;i++){
        printf("\n%d",a[i]);
    }
    printf("sorted array is:");
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("array after sorting");
    for(i=1;i<=n;i++){
        printf("\n%d",a[i]);
    }
return 0;
}
