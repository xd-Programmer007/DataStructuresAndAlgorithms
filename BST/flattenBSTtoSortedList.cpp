#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int x){
        data =x;
        left =right =NULL;
    }
};
Node* head=NULL;
Node *pre=NULL;
Node *nxt=NULL;

void preOrder(Node* root){
        if(root==NULL)
            return ;
        preOrder(root->left);
        if(head==NULL)
            head=root;
        else{
            if(pre==NULL)
                pre = head;
            nxt =root;
            pre->right=nxt;
            nxt->left =pre;
            pre = nxt;
        }
        preOrder(root->right);

}
int main(){
            //         4
            //       /    \
            //     2       6
            //   /   \     /  \
            // 1    3  5    7
            //  To - 1->2->3->4->5->6->7->
            Node* root = new Node(4);
            root->left = new Node(2);
            root->right = new Node(6);
            root->left->left = new Node(1);
            root->left->right =new Node(3);
            root->right->left =new Node(5);
            root->right->right =new Node(7);
            preOrder(root);
            Node* t = head;
            while(t!=NULL){
                cout<<t->data<<"->";
                t =t->right;
            }


}