#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* left;Node* right;
    Node(int x){
        data =x;
        left =right =NULL;
    }
};

bool getPath(Node* root,int key,vector<int>& v){
    if(root==NULL)
        return false;
    v.push_back(root->data);
    if(root->data ==key)
        return true;
    if(getPath(root->left,key,v) || getPath(root->right,key,v))
        return true;
    v.pop_back();
    return false;
}

int LCA(Node* root,int a,int b){
    vector<int>path1,path2;
    if(!getPath(root,a,path1) || !getPath(root,b,path2))
        return -1;
    int pc;
    for(pc=0;pc<path1.size() && path2.size();pc++){
        if(path1[pc]!=path2[pc])
            break;
    }
    return path1[pc-1];
}

int main(){
        //             1
        //         /      \
        //     2           3
        //   /             /   \
        // 4           5       6
        //             /
        //          7
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->left->left=new Node(7);
    root->right->right = new Node(6);
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        cout<<LCA(root,a,b)<<endl;
    }

}