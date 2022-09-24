#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* right,*left ;
    Node(int x){
        data=x;
        right=left =NULL;
    }
};

class Solution{
    public:
    unordered_map<string,int> m;
    vector<Node*> v;

    string solve(Node* root){
        if(root==NULL)
            return " ";
        string s="";
        if(!root->left &&  !root->right){
            s = to_string(root->data);
            m[s]++;
        }
        s = to_string(root->data);
        s += solve(root->left);
        s += solve(root->right);
        if(m[s]==1){
            v.push_back(root);
        }
        m[s]++;
        return s;
    }
    vector<Node*> printDupes(Node* root){
        m.clear();
        v.clear();
        solve(root);
        return v;
    }
};