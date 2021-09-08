//dynamic memory allocation to array by using the function calloc()
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(){
    int n,*arr,i;
    printf("enter size of array");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL){
        printf("memory not allocated");
    }
    else{
        printf("array elements are:");
        for(i=0;i<n;i++){
            printf("%d",*(arr+i));
        }
    }
return 0;
}
