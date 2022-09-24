#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int x){
        data =x;
        left=right =NULL;
    }
};

class Solution{
    int f;
    bool fun(Node* root,int lb,int ub){
        if(root== 0 && abs(lb-ub)==1)
            return 1;
        if(root==0)
            return 0;
        bool l = fun(root->left,lb,root->data);
        bool r = fun(root->right,root->data,ub);
        if(l and r)
            f= 1;
        return 0;
    }
    bool isDeadEnd(Node* root){
        f = 0;
        fun(root,0,INT_MAX);
        return f;
    }
};
