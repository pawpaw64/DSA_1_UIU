#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* insertNode(node* root,int x){
   if(root==NULL){
    node* n=new node();
    n->data=x;
    n->left=NULL;
    n->right=NULL;
    root=n;
    return root;
   }
   if(x<root->data){
    root->left=insertNode(root->left,x);;
   }
   else{
    root->right=insertNode(root->right,x);;
   }
   return root;

}
void inOrder(node* root){ //left->root-> right
    if (root!=NULL){
        inOrder(root->left);
        cout <<root->data<<"->";
        inOrder(root->right);
    }
 }
int findMin(node* root){
    if(root==NULL){
        return -1;
    }
    else if(root->left==NULL){
        return root->data;
    }
    else {
      return findMin(root->left);

    }

}
int findMax(node* root){
    if(root==NULL){
        return -1;
    }
    else if(root->right==NULL){
        return root->data;
    }
    else {
       return findMax(root->right);

    }

}
bool search(node* root,int val){
    if(root==NULL){
       cout << "TREE empty" << endl;
       return 0;
    }
    if(val<root->data){
        search(root->left,val);
    }
    else if(val<root->data){
        search(root->left,val);
    }
    else{
        return 1;
    }
    
}
node* findMinNode(node *root){
    if(root==NULL)
        return root;
    if(root->left==NULL)
        return root;
    else
        return findMinNode(root->left);
}

node* deleteNode(node* root,int item)
{ if(root==NULL)
        return root;
    if(item<root->data){
        /// left
        root->left = deleteNode(root->left,item);
    }
    else if(item>root->data){
        ///right
        root->right = deleteNode(root->right,item);
    }
    /*
    if found -1.no child
              2.one child
              3.two child
    */
   if(root->left==NULL& root->right==NULL){
    delete root;
    root=NULL;
   }
   else if(root->left==NULL){
    node* tmp=new node();
    root=root->right;
    delete tmp;
   }
  else if(root->right==NULL){
    node* tmp=new node();
    root=root->left;
    delete tmp;
   }
   else{
       node* tmp=findMinNode(root->right);
       root->data=tmp->data;
     root->right = deleteNode(root->right,tmp->data);

   }
   return root;


}
int main() {
    node* root=NULL;
    cout << "f" << endl;
    
    root=insertNode(root,80);
    root=insertNode(root,60);
    root=insertNode(root,65);
    root=insertNode(root,20);
    root=insertNode(root,90);
    root=insertNode(root,100);
    root=insertNode(root,95);
    root=insertNode(root,105);
    cout <<"Inorder" << endl;
    inOrder(root);
    cout <<  endl;
    
    cout <<"min:-" <<findMin(root)<< endl;
    
    
    return 0;
}