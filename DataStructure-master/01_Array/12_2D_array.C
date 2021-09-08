#include<stdio.h>
#include<conio.h>
int main(){
    int a[10][10],i,j,n,m;
    printf("enter size of array as row(m),coloum(n)");
    scanf("%d%d",&m,&n);
    printf("enter elements of row and col");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("entered array is");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\narr[%d][%d]=%d",i,j,a[i][j]);
        }
    }
return 0;
}
