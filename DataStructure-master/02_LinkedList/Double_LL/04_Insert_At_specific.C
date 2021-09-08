#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int item);
void traverse();
void insertAtSpecificPos();
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
    traverse();
    printf("\nAdd a node at specified position in LL");
    insertAtSpecificPos();
    traverse();
return 0;
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
void insertAtSpecificPos(){
    int loc,len,i=1;
    len=length();
    //printf("%d",len);
    struct node *temp,*p;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter loc after which node is inserted");
    scanf("%d",&loc);
    printf("enter new data");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(loc>len){
        printf("invalid input");
    }
    else{
         p=root;
        while(i<loc){
            p=p->right;
            i++;
        }
        temp->right=p->right;
        p->right->left=temp;
        p->right=temp;
        temp->left=p;
    }
}


