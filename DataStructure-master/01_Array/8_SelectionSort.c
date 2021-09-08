#include<stdio.h>
#include<conio.h>
int main(){
    int a[10],i,j,n,temp,min;
    printf("enter n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("element after sorting");
    for(i=1;i<=n-1;i++){
            min=i;
        for(j=i+1;j<=n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(i=1;i<=n;i++){
        printf("\n%d",a[i]);
    }
return 0;
}
