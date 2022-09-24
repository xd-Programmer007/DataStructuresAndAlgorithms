#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* right,*left;
    Node(int x){
        data =x;
        right =left =NULL;
    }
};

Node* LCA(Node* root, int a, int b){
    if(root==NULL)
        return NULL;
    if(root->data == a|| root->data ==b)
        return root;
    Node* left = LCA(root->left,a,b);
    Node* right = LCA(root->right,a,b);
    if(left!=NULL && right!=NULL)
        return root;
    if(left== NULL && right ==NULL)
        return NULL;
    if(left!=NULL)
        return LCA(root->left,a,b);
    return LCA(root->right,a,b);
}

int findDist(Node* root,int k,int dist){
    if(root==NULL)
        return -1;
    if(root->data == k)
        return dist;
    int left = findDist(root->left,k,dist+1);
    if(left!=-1)
        return left;
    return findDist(root->right,k,dist+1);
}
int distBtwNodes(Node* root,int a,int b){
    Node* lca = LCA(root,a,b);
    int d1 = findDist(lca,a,0);
    int d2 = findDist(lca,b,0);
    return d1+d2;
}