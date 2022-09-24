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
void preorder_iterative(treenode*root){
    stack<treenode*> s;
    treenode* curr = root;
    while(!s.empty() || curr!=NULL){
        if(curr!= NULL){
            cout<<curr->val<<" ";
            s.push(curr);
            curr= curr->right;
        }
        else{
            curr = s.top();
            s.pop();
            curr = curr->left;
        }
    }
}

void preorder_recursion(node* root){
    if(root==NULL)
        return;
    cout<<root->val<<" ";
    preorder_recursion(root->left);
    preorder_recursion(root->right);

}

int main(){
    node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
    cout<<"\n  Pre Order traversal recursive\n ";
    preorder_recursion(tree);
    cout<<"\n Pre Order traversal iterative \n";
    preorder_iterative(tree);
    return 0;
}