//element searched in LL.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void traverse();
void create(int data);
void search(int item);
int length();
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
int main(){
    int n,data,i,item;
    printf("enter size of LL");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter data in npde");
        scanf("%d",&data);
        create(data);
    }
    traverse();
    printf("enter elemnet to be searched");
    scanf("%d",&item);
    search(item);
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
void search(int item){
    struct node* p;
    int count=0,i=1,flag=0,len;
    len=length();
    p=root;
    while(i<len){
        count++;
        if(p->data==item){
            flag=1;
            break;
        }
        p=p->link;
        i++;
    }
    if(flag==1)
        printf("element found at =%d",count);
    else
        printf("element not found");
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

