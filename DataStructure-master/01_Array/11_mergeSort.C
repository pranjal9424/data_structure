//MERGE SORT
#include<stdio.h>
#include<conio.h>
void merge(int b[20],int lb,int mid,int ub);
void mergeSort(int a[],int lb,int ub);
void mergeSort(int a[],int lb,int ub){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub){
    int i,j,k,b[20];
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
            k++;
        }else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j];
            j++;
            k++;
        }
    }else{
        while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++){
        a[k]=b[k];
    }

}
int main(){
    int a[20],n,i;
    printf("enter size");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    printf("elements after sorting");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
return 0;
}
