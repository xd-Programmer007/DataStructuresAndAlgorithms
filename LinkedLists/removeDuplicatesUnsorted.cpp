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
     Node* curr=head,*prev = NULL;
     map<int,int> m;
     if(head->next==NULL)
         return ;
    while(curr!=NULL){
        if(m[curr->data]==1)
            prev->next= curr->next,curr=curr->next;
        else{
            m[curr->data]++;
            prev =curr;
            curr =curr->next;
            }
        
    }
    return ;
}
void Solve(){
        Node* head=new Node();
        push(head,4);
        push(head,2);
        push(head,5);
        push(head,6);
        push(head,2);
        push(head,5);
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