#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int x){
        data =x;
        left = right = NULL;
    }
};

int maxSubTreeSum(Node* root,int& max_sum){
    if(root==NULL)
        return 0;
    int l = maxSubTreeSum(root->left,max_sum);
    int r = maxSubTreeSum(root->right,max_sum);
    int curr_val = root->data + l+r;
    max_sum= max(max_sum,curr_val);
    return curr_val;
}
int main(){
        //       1
        //     /    \
        //   -2      3
        //   / \     /  \
        //  4   5-6    2
    Node* root = new Node(1);
    root->left = new Node(-2);
    root->left->left  = new Node(4);
    root->right = new Node(3);
    root->right->right = new Node(2);
    root->right->left  = new Node(-6);
    root->left->right = new Node(5);
    int max_sum = INT_MIN;
    int sum = maxSubTreeSum(root,max_sum);
    cout<<max_sum<<endl;
}