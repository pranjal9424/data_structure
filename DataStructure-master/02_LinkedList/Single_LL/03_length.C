#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int item);
int traverse();
int length();
struct node{
    int data;
    struct node* link;
};
struct node* root;

void create(int item){
     struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        struct node* p;
        p=root;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
    }
}
int traverse(){
    struct node* p;
    p=root;
    if(p==NULL){
        printf("LL is empty");
    }
    else{
        printf("value in LL are:");
        while(p!=NULL){
            printf("\n%d",p->data);
            p=p->link;
        }
    }
return 0;
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
int main(){
  int n,item,i,count;
  printf("enter size");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    printf("enter element item");
    scanf("%d",&item);
    create(item);
  }
    traverse();
    count=length();
    printf("\nLength of LL %d",count);
return 0;
}
