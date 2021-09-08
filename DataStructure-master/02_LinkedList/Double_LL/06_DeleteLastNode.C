#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int item);
void traverse();
void DeleteLastNode();
int length();
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=  NULL;
int main(){
    int n,item,i,newData;
    printf("enter size of LL");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter element");
        scanf("%d",&item);
        create(item);
    }
    printf("\nDelete first node from LL");
    DeleteLastNode();
    traverse();
return 0;
}
int length(){
    struct node *p;
    int count=0;
    p=root;
    if(root==NULL){
        printf("empty Doubly LL");
    }
    else{
        while(p!=NULL){
            count++;
            p=p->right;
        }
    }
return count;
}
void DeleteLastNode(){
    int len;
    len=length();
    if(root==NULL){
        printf("LL is already empty");
    }
    else{
        struct node *temp;
        temp=root;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        temp->left->right=NULL;
        temp->left=NULL;
        free(temp);
    }
}
void create(int item){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    temp->data=item;
    if(root==NULL)
        root=temp;
    else{
        struct node *p;
        p=root;
        while(p->right!=NULL){
            p=p->right;
        }
        p->right=temp;
        temp->left=p;
    }
}
void traverse(){
    struct node *p;
    p=root;
    if(root==NULL)
        printf("Doubly LL is empty");
    else{
        printf("\nelements in LL array is");
        while(p!=NULL){
            printf("\n%d",p->data);
            p=p->right;
        }
    }
}



