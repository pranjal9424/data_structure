#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct employee{
    int eno;
    char ename[20];
    float esal;
};
int main(){
    struct employee *ptr;
    ptr=(struct employee*)malloc(sizeof(struct employee));
    printf("enter data of employee");
    scanf("%d%s%f",&ptr->eno,ptr->ename,&ptr->esal);
    printf("you have entered following data %d %s %f",ptr->eno,ptr->ename,ptr->esal);
return 0;
}
