//deleting first node.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int item);
void deleteFirstNode();
void traverse();
int length();
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
int length(){
    int count=0;
    struct node* temp;
    temp=root;
    while(temp!=NULL){
        count++;
        temp=temp->link;
    }
    return count;
}
void deleteFirstNode(){
    int loc;
    printf("\nenter which node to be deleted");
    scanf("%d",&loc);
    if(loc>length()){
        printf("\nNode not found");
    }
    else if(loc==1){
        struct node* temp;
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else{
        struct node* p,*q;
        int i=1;
        p=root;
        while(i<loc-1){
            p=p->link;
            i++;
        }
            q=p->link;
            p->link=q->link;
            q->link=NULL;
            free(q);
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
    deleteFirstNode();
    printf("\nafter deleting First node");
    traverse();
return 0;
}

