#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};


bool isBST(Node* root,Node* min,Node* max){
    if(root == NULL) return true;
    
    if(min!=NULL && root->data<=min->data) return false;
    
    if(max!=NULL && root->data >= max->data) return false;
    
    bool left=isBST(root->left,min,root);
    bool right=isBST(root->right,root,max);
    
    return left && right;
}
void inOrder(Node* root){
    if(!root) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main()
{
    
    Node* root = new Node(2);
    root->left=new Node(1);
    root->right=new Node(3);
    
    if(isBST(root,NULL,NULL)) cout<<"BST";
    else cout <<"Not BST";
    return 0;
}