//insertionSort
#include<stdio.h>
#include<conio.h>
int main(){
    int a[20],i,n,temp,key,j;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array is");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("sorted array is:");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
return 0;
}
