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

void leftView(treenode* root,int level,vector<int>& ds){
        if(root==NULL)
            return ;
        if(level==ds.size())
            ds.push_back(root->val);
        leftView(root->left,level+1,ds);
        leftView(root->right,level+1,ds);
        
}

int main(){
    node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
    vector<int> v;
    leftView(tree,0,v);
    for(auto i:v)
        cout<<i<<" ";
    
    return 0;
}