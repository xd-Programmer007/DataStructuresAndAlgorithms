#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

class Solution{
        public:
        Node* prev=NULL;
        Node* head =NULL;
        Node* binaryToDLL(Node* root){
            if(root==NULL)
                return NULL;
            binaryToDLL(root->left);
            if(prev==NULL)head=root;
            else{
                root->left =prev;
                prev->right =root;
            }
            prev = root;
            binaryToDLL(root->right);
        }
};
 
//This is the logic of Binary Tree to DLL