//BinarySearch
#include<stdio.h>
#include<conio.h>
int main(){
    int a[20],i,n,x,l,h,mid,flag=0;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter array element");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("array is");
    for(i=1;i<=n;i++){
        printf("%d",a[i]);
    }
    printf("enter element to be searched");
    scanf("%d",&x);
    l=1;
    h=n ;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==x){
            flag=1;
            break;
        }
        else if(x>a[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    if(flag==1)
        printf("element found at position %d",mid);
    else
        printf("element not found");
return 0;
}
