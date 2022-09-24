#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* left,*right ;
    Node(int x){
        data = x;
        left = right =NULL;
    }
};

class Solution{
    public:
        struct result{
            int maxi;
            int mini;
            bool isBST;
            int size;
        };
        result findlargestBST(Node* root,int& ans){
            if(root==NULL)
                return {INT_MIN,INT_MAX,true,0};
            result left = findlargestBST(root->left,ans);
            result right =findlargestBST(root->right,ans);

            result curr;
            curr.maxi = max(root->data,right.maxi);
            curr.mini = min(root->data,left.mini);

            curr.size = left.size +right.size+1;
            if(left.isBST && right.isBST && (left.maxi<root->data && right.mini>root->data))
                curr.isBST = true;
            else
                curr.isBST =false;
            if(curr.isBST)
                ans = max(ans,curr.size);
            return curr;
        }

        int largestBst(Node* root){
            int ans = INT_MIN;
            findlargestBST(root,ans);
            return ans;
        }
};