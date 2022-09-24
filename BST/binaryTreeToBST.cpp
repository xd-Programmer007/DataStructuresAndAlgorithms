#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* right,*left;
};
class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void preOrder(Node* root,vector<int>& v){
        if(root==NULL)
            return;
        preOrder(root->left,v);
        v.push_back(root->data);
        preOrder(root->right,v);
    }
    
    void preOrder_(Node* root,vector<int>& v,int& i){
        if(root==NULL)
            return;
        preOrder_(root->left,v,i);
        root->data = v[i++];
        preOrder_(root->right,v,i);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>v ;
        preOrder(root,v);
        sort(v.begin(),v.end());
        int i=0;
        preOrder_(root,v,i);
        return root;
    }
};