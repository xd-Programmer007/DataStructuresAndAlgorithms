#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* right,*left;
    Node(int x){
        data=x;
        right =left =NULL;
    }
};
 map<int,vector<int>> levelOrderTraversal(Node* root){
    queue<pair<Node*,int>>q;
    map<int,vector<int>> m;
    q.push({root,0});
    while(!q.empty()){
        Node* curr = q.front().first;
        int level = q.front().second;
        q.pop();
        m[level].push_back(root->data);
        if(curr->left)
            q.push({curr->left,level+1});
        if(curr->right)
            q.push({curr->right,level+1});
    }
    return m;
}

bool areAnagrams(Node* root1,Node* root2){
    map<int,vector<int>> m1,m2;
    m1  = levelOrderTraversal(root1);
    m2 = levelOrderTraversal(root2);
    if(m1.size()!=m2.size())
        return false;
    for(int i=0;i<m1.size();i++){
        vector<int> a = m1[i],b = m2[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a.size()!=b.size())
            return false;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])
                return false;
        }
    }
    return true;
}
int main()
{
    // Constructing both the trees.
    Node* root1 =new Node(1);
    root1->left = new Node(3);
    root1->right = new Node(2);
    root1->right->left = new Node(5);
    root1->right->right = new Node(4);
 
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
 
    areAnagrams(root1, root2)? cout << "Yes" : cout << "No";
    return 0;
}