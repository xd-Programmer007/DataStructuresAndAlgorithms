#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;
    node(int x){
        data = x;
        right = left =NULL;
    }
};

//a function to perform merge
vector<int> merge(vector<int> a,vector<int> b){
    int m = a.size(),n = b.size();
    vector<int> ans(m+n);
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            ans[k++] = a[i++];
        }
        else
            ans[k++] = b[j++];
    }
    while(i<m)
        ans[k++] = a[i++];
    while(j<n)
        ans[k++] =b[j++];
    return ans;
}

node* vectorToBST(vector<int> v,int start,int end){
    if(start> end)
        return NULL;
    int mid = (start+end)/2;
    node* root = new node(v[mid]);
    root->left = vectorToBST(v,start,mid-1);
    root->right =vectorToBST(v,mid+1,end);
    return root;
}

void preOrder(node* root){
    if(root==NULL)
        return ;
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
}

void preOrderInsertion(node* root,vector<int>& v){
    if(root==NULL)
        return ;
    preOrderInsertion(root->left,v);
    v.push_back(root->data);
    preOrderInsertion(root->right,v);
}
int main(){
    node *root1 = new node(100);
    root1->left     = new node(50);
    root1->right = new node(300);
    root1->left->left = new node(20);
    root1->left->right = new node(70);
 
    /* Create following tree as second balanced BST
            80
        / \
        40 120
    */
    node *root2 = new node(80);
    root2->left     = new node(40);
    root2->right = new node(120);

    vector<int> v1,v2;
    preOrderInsertion(root1,v1);
    preOrderInsertion(root2,v2);
    vector<int> ans = merge(v1,v2);
    node* root3 = vectorToBST(ans,0,ans.size()-1);
    preOrder(root3);
    
}