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
void post_iterative(treenode*root){
    //create an empty stack and push the root node
    stack<treenode*> s;stack<int> out;
    s.push(root);
    while(!s.empty() ){
        treenode* curr = s.top();
        s.pop();
        out.push(curr->val);
        if(curr->left)
            s.push(curr->left);
        if(curr->right)
            s.push(curr->right);
    }
    while(!out.empty()){
        cout<<out.top()<<" ";
        out.pop();
    }
}


void post_recursion(node* root){
    if(root==NULL)
        return;
    post_recursion(root->left);
    post_recursion(root->right);
    cout<<root->val<<" ";

}

int main(){
    node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
    cout<<"\n  Pre Order traversal recursive\n ";
    post_recursion(tree);
    cout<<"\n Pre Order traversal iterative \n";
    post_iterative(tree);
    return 0;
}