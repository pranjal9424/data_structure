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

Node* insertdata(Node* root,int val){
    if(!root) return new Node(val);
    
    if(val<root->data) root->left=insertdata(root->left,val);
    else root->right=insertdata(root->right,val);
    
    return root;
}

Node* searchInBST(Node* root,int Key){
    if(!root) return NULL;
    if(root->data == Key) return root;
    if(root->data > Key) return searchInBST(root->left,Key);
    
    return searchInBST(root->right,Key);
}
int main()
{
    Node* root=NULL;
    root=insertdata(root,5);
    insertdata(root,1);
    insertdata(root,3);
    insertdata(root,4);
    insertdata(root,2);
    insertdata(root,7);
    
    if(!searchInBST(root,7)) cout<<"not exit";
    else cout<<"yes exit";
    return 0;
}
