//reverse the complete LL
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void traverse();
void create(int data);
void reverseLL();
int length();
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
    reverseLL();
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
void reverseLL(){
    int i,j,len,temp;
    struct node* p,*q;
    len=length();
    //printf("\n%d",len);
    i=0;
    j=len-1;
    p=q=root;
    while(i<j){
        int k=0;
        while(k<j){
            q=q->link;
            k++;
        }
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        i++;
        j--;
        p=p->link;
        q=root;
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
