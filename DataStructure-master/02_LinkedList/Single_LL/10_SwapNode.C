//swap 2 nodes.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void traverse();
void create(int data);
void swapNode(int loc);
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
int main(){
    int n,data,i,loc;
    printf("enter size of LL");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter data in npde");
        scanf("%d",&data);
        create(data);
    }
    traverse();
    printf("enter node loc no to be swaped");
    scanf("%d",&loc);
    swapNode(loc);
    traverse();
return 0;
}
void swapNode(int loc){
    struct node *p,*q,*r;
    int i=1;
    p=root;
    while(i<loc-1){
        p=p->link;
        i++;
    }
    q=p->link;
    r=q->link;

    q->link=r->link;
    r->link=q;
    p->link=r;
}
void create(int data){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
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
    struct node* p;
    p=root;
    if(root==NULL)
        printf("\nLL is empty");
    else{
        printf("\nelements of array are");
        while(p!=NULL){
            printf("\n%d",p->data);
            p=p->link;
        }
    }
}

