#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int item);
void traverse();
void DeleteSpecificNode();
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
    printf("\nDelete specific node from LL");
    DeleteSpecificNode();
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
void DeleteSpecificNode(){
    int loc,i=1;
    struct node *p,*q,*r;
    printf("\nenter loc of node to be deleted");
    scanf("%d",&loc);
    struct node *temp;
    temp=root;
    while(i!=loc){
        temp=temp->right;
        i++;
    }
    q=temp;
    p=q->left;
    r=q->right;
    p->right=r;
    r->left=p;
    free(q);

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




