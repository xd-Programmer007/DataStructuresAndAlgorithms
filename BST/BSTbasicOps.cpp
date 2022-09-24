#include<bits/stdc++.h>
using namespace std;
 
class BST{
    int data;
    BST* left,*right;
    public:
        BST();
        BST(int);
        BST* Insert(BST*,int);
        void Inorder(BST*);
};
BST::BST()
    :data(0)
    ,left(NULL)
    ,right(NULL)
{}

BST::BST(int value){
    data = value;
    left = right = NULL;
}
BST* BST::Insert(BST* root,int value){
    if(!root){
        return new BST(value);
    }
    if(value>root->data)
        root->right = Insert(root->right,value);
    else    
        root->left =Insert(root->left,value);
    return root;
}

void BST::Inorder(BST* root){
    if(!root)
        return;
    Inorder(root->left);
    cout<<root->data<<endl;
    Inorder(root->right);
}
int main(){
    BST b,*root = NULL;
    root = b.Insert(root,4);
    b.Insert(root,2);
    b.Insert(root,1);
    b.Insert(root,3);
    b.Insert(root,6);
    b.Insert(root,5);
    b.Insert(root,7);
    b.Inorder(root);
    
return 0;
}