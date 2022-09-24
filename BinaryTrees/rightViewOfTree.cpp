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
vector<treenode*> ds;

void rightSideView(treenode* root,int level,vector<treenode*>& ds){
    //level order traversal space complexity is very high
    //very short code is there-> reverse preorder
    //pass root and level
    if(root== NULL)
        return;
    if(level == ds.size())
        ds.push_back(root);
    rightSideView(root->right,level+1,ds);
    rightSideView(root->left,level+1,ds);

}

int main(){
    node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
    vector<treenode*> res;
    rightSideView(tree,0,res);
    for(auto i:res)
        cout<<i->val<<" ";
    return 0;
}