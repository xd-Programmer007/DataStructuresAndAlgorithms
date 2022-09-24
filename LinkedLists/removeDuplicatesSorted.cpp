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
    cout<<endl;
}

void removeDuplicates(Node *head)
{
 // your code goes here
     Node* t = head;
     if(head->next==NULL)
         return ;
    while(t->next!=NULL){
        if(t->data == t->next->data)
            t->next = t->next->next;
        else t =t->next;
    }
    return ;
}
void Solve(){
        Node* head=new Node();
        push(head,3);
        push(head,4);
        push(head,4);
        push(head,5);
        push(head,6);
        push(head,6);
        print(head);
        removeDuplicates(head);
        print(head);
        
}
 
int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}