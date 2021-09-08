/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void traverse();
void create(int data);
void sorting();
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
int main(){
    int n,data,i,n1,n2;
    printf("enter size of LL");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter data in npde");
        scanf("%d",&data);
        create(data);
    }
    traverse();
    printf("enter node no to be swaped");
    scanf("%d%d",&n1,&n2);
    sorting();
    traverse();
return 0;
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
void sorting(){
    struct node* p,*q;
    int i,j,k;
    //i=0;
    j=1;
    p=q=root;
    while(j!=n){
     int l=0,m=0;
     while(m<n-1){
        q=q->link;
        m++;
     }while(l<n-1){
        p=p->link;
        n++;
     }
     if(p->data>q->data){
        temp=p->data;
        p->data=q->data;
        q->data=temp;
     }
    }
}*/
