#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int item);
void traverse();
void reverseLL();
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
    printf("\nreversed LL is");
    reverseLL();
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
void reverseLL(){
    int i,j,len,temp;
    struct node *q,*p;
    p=q=root;
    len=length();
    i=1;
    j=len;
    while(i<j){
        int k=1;
        while(k<j){
            q=q->right;
            k++;
        }
        temp=q->data;
        q->data=p->data;
        p->data=temp;
        i++;
        j--;
        p=p->right;
        q=root;

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





