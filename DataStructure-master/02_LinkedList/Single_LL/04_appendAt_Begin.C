//add new node at the start.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int item);
void addNodeBegin(int newData);
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
void create(int item){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
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
}
void traverse(){
    struct node* temp;
    temp=root;
    if(temp==NULL)
        printf("LL is empty");
    else{
        printf("values in LL are");
        while(temp!=NULL){
        printf("\n%d",temp->data);
        temp=temp->link;
        }
    }
}
void addNodeBegin(int newData){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=newData;
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;
    }
}
int main(){
    int n,item,i,newData;
    printf("enter size of linklist");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter elements");
        scanf("%d",&item);
        create(item);
    }
    traverse();
    printf("\nenter node at begin");
    printf("\nenter data for the node");
    scanf("%d",&newData);
    addNodeBegin(newData);
    printf("after adding one node");
    traverse();
return 0;
}
