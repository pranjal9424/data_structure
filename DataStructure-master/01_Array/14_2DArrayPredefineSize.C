#include<stdio.h>
#include<conio.h>
int main(){
int i,j;
int arr[3][2]={{1,2},{2,3},{3,4}};
//traversing 2D array
for(i=0;i<3;i++){
 for(j=0;j<2;j++){
   printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
 }//end of j
}//end of i
return 0;
}
