#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};

void push(Node* head,int data){
    Node* new_node = new Node();
    new_node ->data = data;
    if(head->next==NULL)
        head->next = new_node;
    else{
        new_node->next = head->next;
        head->next = new_node;
    }
}

void print(Node* head){
    Node* t = head->next;
    while(t!=NULL){
        cout<<t->data<<"->";
        t =t->next;
    }
}

bool sum(Node* head,bool f){
    if(head ==NULL)
        return f;
    bool flag= sum(head->next,f);
    int c =0;
    if(flag){
        c = (head->data +1)/10 ;
        head->data=( head->data+1)%10;
    }
    return (c==1)?true:false;
}

 
int main(){
    Node* head =new Node();
    int n;cin>>n;
    for(int i=n;i>=1;i--){
        int k;cin>>k; push(head,k);}
    bool f = sum(head->next,true);
    if(f){
        push(head,1);
    }
    print(head);
    cout<<endl;
return 0;
}