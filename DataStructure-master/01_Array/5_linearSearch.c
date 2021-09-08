//Linear Search
#include<stdio.h>
#include<conio.h>
int main(){
    int a[10],i,n,x;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array is");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("enter element to be searched");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            printf("element found at %d",i);
            break;
        }
    }
return 0;
}
