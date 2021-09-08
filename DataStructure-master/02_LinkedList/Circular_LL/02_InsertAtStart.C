#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int n);
void insertAtBegin(int newData);
void traverse();
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
int main(){
    int n,newData;
    printf("enter size of LL");
    scanf("%d",&n);
    create(n);
    traverse();
    printf("\nenter data of new node inserted at begin");
    scanf("%d",newData);
    insertAtBegin(newData);
    traverse();
return 0;
}
void insertAtBegin(int newData){
    struct node *temp,*p;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=newData;
    temp->link=NULL;
    p=root->link;
    temp->link=root;
    root=temp;
    while(p->link!=root->link){
        p=p->link;
    }
    p->link=root;
}
void create(int n){
    struct node *temp;
    int i;
    for(i=0;i<n;i++){
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&temp->data);
        temp->link=NULL;
        if(root==NULL){
            root=temp;
        }
        else{
            struct node *p;
            p=root;
            while(p->link!=NULL){
                p=p->link;
            }
            p->link=temp;
        }
    }
    temp->link=root;
    printf("\nlast node pointing to first node data =%d",temp->link->data);
}
void traverse(){
    struct node *temp;
    temp=root;
    if(temp==NULL){
        printf("\nLL is empty");
    }else{
        printf("\nelement in LL are");
        while(temp->link!=root){
            printf("\n%d",temp->data);
            temp=temp->link;
        }
        printf("\n%d",temp->data);
    }

}

