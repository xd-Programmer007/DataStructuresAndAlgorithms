//This problem had a good difficulty in my opinion woth trying again
#include<bits/stdc++.h>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(NULL), right(NULL) {}
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    TreeNode* help(TreeNode* root, int key){
    if(!root)   return NULL;
    if(root->val > key) root->left =  help(root->left, key);
    else if(root->val < key) root->right = help(root->right, key);
    else{
        if(!root->left and !root->right) return NULL;
        else if(!root->left or !root->right){
            if(!root->left) return root->right;
            else    return root->left;
        }
        TreeNode* temp = root->right;
        while(temp->left)   temp = temp->left;
        root->val = temp->val;
        root->right = help(root->right, temp->val);
    }
    return root;
}
TreeNode* deleteNode(TreeNode* root, int key) {
 return help(root,  key);   
}
};