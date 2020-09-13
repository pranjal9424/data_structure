#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char ch[5];
    gets(ch);
    per(ch,0,strlen(ch)-1);
}
void per(char *s,int i,int n)
{
     static count; int j;
     if(i==n)
     {

         printf("%s\n",s);
     }
     else
        for(j=i;j<=n;j++)
     {
         swap((s+i),(s+j));
         per(s,i+1,n);
         swap((s+i),(s+j));//backtraking
     }
}
void swap(char *x,char *y)
{
    char ch;
    ch=*x;
    *x=*y;
    *y=ch;
}
