// the left subtree of a node contains only nodes with keys lesse than the node's keys that
#include<bits/stdc++.h>
using namespace std;
//  the right subtree of a node contains only nodes with keys greater than the node's key.
// the left and right subtree each must also be a binary search tree.There must be no duplicate nodes
class node{
    public:
    int key;
    node* left,*right;
    node(int x){
        key = x;
        left=right =NULL;
    }

};

node* search( node* root,int key){
    if(root==NULL||root->key==key)  
        return root;
    if(root->key <key)
        return search(root->right,key);
    return search(root->left,key);
}

int main(){
    //         4
    //       /     \
    //     2       6
    //   /   \     /   \
    // 1      3 5     7
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(6);
    root->left->left = new node(1);
    root->left->right =new node(3);
    root->right->right = new node(7);
    root->right->left = new node(5);
    node* key_node = search(root,5);
    cout<<key_node->key<<endl;
}