#include<bits/stdc++.h>
using namespace std;
 
class  Node{
    public:
    int data;
    Node* right,*left;
    Node(int x){
        data = x;
        left = right= NULL;
    }
};

void InOrderCheck(Node* root){
    if(root==NULL)
        return ;
    InOrderCheck(root->left);
    cout<<root->data<<" ";
    InOrderCheck(root->right);
}

void printString(string new_str){
    static int j=1;
    if(new_str.size()==0){
        return;
    }
    cout<<j<<". ";
    for(int i=0;i<new_str.size();i++){
        cout<<new_str[i]<<" ";
    }
    j++;
    cout<<endl;
    
}
void kPathsSum(Node* root,vector<string> res,int k){
    if(root==NULL)
        return;
    string s = to_string(root->data);
    for(int i=0;i<res.size();i++){
        res[i] += s;
    }
    res.push_back(s);
    for(int i=0;i<res.size();i++){
        int sum =0;
        string new_str = res[i];
        for(int j=0;j<new_str.size();j++){
            sum += (new_str[j]-'0');
        }
        if(sum == k) 
            printString(new_str);
    }
    kPathsSum(root->left,res,k);
    kPathsSum(root->right,res,k);
}
int main(){
// Input : k = 5  
//         Root of below binary tree:
//            1
//         /     \
//       3        -1
//     /   \       /   \
//    2     1   4     5                        
//         /     / \      \                    
//        1   1   2     6 
// 2 3 1 1 1 1 4 2 -1 5 6
Node* root= new Node(1);
root->left  = new Node(3);
root->left->left = new Node(2);
root->left->right = new Node(1);
root->left->right->left = new Node(1);
root->right = new Node(-1);
root->right->left = new Node(4);
root->right->left->left = new Node(1);
root->right->left->right = new Node(2);
root->right->right=new Node(5);
root->right->right->right =new Node(6);
// InOrderCheck(root);
int k=5;//This map stores string with its corresponding sum
vector<string> res;
kPathsSum(root,res,k);
return 0;
}