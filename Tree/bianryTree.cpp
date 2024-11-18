#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};

 node *createTree(int x){
    {
         node *root=new node;
         root->data=x;
         root->left=NULL;
         root->right=NULL;
         return root;
    }
 }
 void inOrder(node* root){ //left->root-> right
    if (root!=NULL){
        inOrder(root->left);
        cout <<root->data<<"->";
        inOrder(root->right);
    }
 }
 void preOrder(node* root){
    if(root!=NULL){
        cout << root->data << endl;
        preOrder(root->left);
        preOrder(root->right);
        
    }
 }
 void postOrder(node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << endl;
        
    }
 }

int main() {
    node* root=NULL;
    root=createTree(12);
    root->left=createTree(30);
    root->right=createTree(20);
    root->left->left=createTree(28);
    root->left->right=createTree(4);
    root->right->left=createTree(16);
    root->right->right=createTree(3);
    cout <<"Inorder" << endl;
    inOrder(root);
    cout <<"Preorder" << endl;
    preOrder(root);
    cout <<"Postorder" << endl;
    postOrder(root);

    

    return 0;
}