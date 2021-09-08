#include<stdio.h>
#include<conio.h>
int main(){
    int a[2][3][2],i,j,k;
    printf("enter elements");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    printf("array is:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){
               printf("arr[%d][%d][%d]=%d\n",i,j,k,a[i][j][k]);
            }
        }
    }
return 0;
}
