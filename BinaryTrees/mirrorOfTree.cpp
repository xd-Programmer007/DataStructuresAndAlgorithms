#include<bits/stdc++.h>
using namespace std;
 
typedef struct treenode{
    int val;
    treenode* left;
    treenode* right;
}node;

node* createNode(int val){
    node* newNode = new treenode();
    newNode->val = val;
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode;
}

void inorder(node* root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

}

treenode* mirrorTree(node* root){
    if(root==NULL)
        return root;
    node* t = root->left;
    root->left = root->right;
    root->right = t;

    if(root->left)
        mirrorTree(root->left);
    if(root->right)
        mirrorTree(root->right);
    return root;
}

int main(){
    node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
    inorder(tree);
    mirrorTree(tree);
    cout<<"\nIn Order of mirror Tree "<<endl;
    inorder(tree);
    return 0;
}