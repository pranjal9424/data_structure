#include <stdio.h>
#include <stdlib.h>

int values[] = { 88, 56, 100, 2, 25 };

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main () {
   int num,n,k;
   scanf("%d",&num);
   int values[num];
   for(int i=0;i<num;i++){
    scanf("%d",&values[i]);
   }
   scanf("%d",&k);
   for( n = 0 ; n <num; n++ ) {
        if(values[n]==k){
          printf("%d ", n+1);
          break;
        }
   }

   return(0);
}
