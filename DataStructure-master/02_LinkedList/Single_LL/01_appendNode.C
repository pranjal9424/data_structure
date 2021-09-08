//append node at first position
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
int main(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter your data");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    printf("address at root %d",root);
    printf("\naddress at temp %d",temp);
    printf("\n value at data field of node %d",*root);
return 0;
}
