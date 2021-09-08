//append node at the end of nodes
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
    printf("enter value at data field");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
        root=temp;
    else{
        struct node* p;
        p=root;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
    }
return 0;
}


