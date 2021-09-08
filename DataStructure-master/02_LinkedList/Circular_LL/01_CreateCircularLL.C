#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int n);
void traverse();
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
int main(){
    int n;
    printf("enter size of LL");
    scanf("%d",&n);
    create(n);
    traverse();
return 0;
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
