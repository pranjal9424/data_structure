//quick sort
#include<stdio.h>
#include<conio.h>
void quickSort(int a[20],int start,int end){
    int temp,pivot,i,j;
    if(start<end){
    pivot=start;
    i=start;
    j=end;
   while(i<j){
    while(a[i]<=a[pivot]&&i<end){
        i++;
    }
    while(a[j]>a[pivot]){
        j--;
    }
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
   }
   temp=a[pivot];
   a[pivot]=a[j];
   a[j]=temp;

   quickSort(a,start,j-1);
   quickSort(a,j+1,end);
  }
}
int main(){
    int a[20],i,n;

    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("entered array is:");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    printf("sorted array is");
    quickSort(a,0,n-1);
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
return 0;
}
