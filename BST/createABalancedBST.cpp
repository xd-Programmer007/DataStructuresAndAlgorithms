#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* right ,*left;
    Node(int x){
        data = x;
        right =left =NULL;
    }
};

void inOrder(Node* root,vector<int>& v){
    if(root==NULL)
        return;
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);
}

Node* inOrderToBST(int start,int end,vector<int> v){
    if(start>end)
        return NULL;
    int mid = (start+end)/2;
    Node* root = new Node(v[mid]);
    root->left = inOrderToBST(start,mid-1,v);
    root->right = inOrderToBST(mid+1,end,v);
    return root;
}

Node* balanceBST(Node* root){
    vector<int> v;
    inOrder(root,v);
    int start = 0,end =v.size();
    Node* ans = inOrderToBST(start,end,v);
}