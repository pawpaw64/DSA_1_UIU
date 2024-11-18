
#include<stdio.h>
struct node
{
    int key;
    struct node *left,*right;
};

struct node *newNode(int key)
{
    struct node *temp =malloc(sizeof(struct node));
    temp->key = key;
    temp->left = temp->right = NULL;

    return temp;

};

struct node *insert(struct node *root,int key)
{
    if(root==NULL)
    {
        return newNode(key);
    }

    if(key<root->left)
    {
        root->left = insert(root->left,key);
    }
    else if(key>root->right)
    {
        root->right = insert(root->right,key);
    }

    return root;
};

int isDivisionPossible(struct node *root,int d)
{

    if(root->key%root->left->key ==d )
    {
        return 1;
    }
    else if(root->key%root->right->key ==d )
    {
        return 1;
    }
    isDivisionPossible(root->left,d);
    isDivisionPossible(root->right,d);

    return 0;
}

void inorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d",root->key);
        inorder(root->right);
    }
}
int main()
{
    struct node *root = malloc(sizeof(struct node));
    root = insert(root,20);
    insert(root,4);
    insert(root,21);
    insert(root,1);
    insert(root,9);
    insert(root,30);

    inorder(root);

    int division;
    scanf("%d",&division);
    if(isDivisionPossible(root,division))
    {
        printf("Division possible.");
    }
    else
    {
        printf("Division not possible.");
    }

}
