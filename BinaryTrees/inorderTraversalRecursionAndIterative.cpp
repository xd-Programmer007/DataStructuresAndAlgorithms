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
void inorder_iterative(treenode*root){
    stack<treenode*> s;
    treenode* curr = root;
    while(!s.empty() || curr!=NULL){
        if(curr!= NULL){
            s.push(curr);
            curr= curr->left;
        }
        else{
            curr = s.top();
            s.pop();
            cout<<curr->val<<" ";
            curr = curr->right;
        }
    }
}

void inorder_recursion(node* root){
    if(root==NULL)
        return;
    inorder_recursion(root->left);
    cout<<root->val<<" ";
    inorder_recursion(root->right);

}

int main(){
    node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
    inorder_recursion(tree);
    cout<<"\nIn Order of mirror Tree "<<endl;
    inorder_recursion(tree);
    cout<<"\n THis is iterative inorder traversal of the same\n";
    inorder_iterative(tree);
    return 0;
}