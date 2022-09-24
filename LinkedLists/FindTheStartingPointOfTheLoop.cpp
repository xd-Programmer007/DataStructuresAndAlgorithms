#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void formloop(Node*head, int pos){
    Node* t = head->next,*posi = head;
    while(t->next!=NULL){
        t=t->next;
    }
    while(pos--){
        posi = posi->next;
    }
    t->next =  posi;
}
void append(Node* head,int data_){
    Node* new_node = new Node();
    new_node->data=data_;
    new_node->next = NULL;
    if(head->next ==NULL)
        head->next = new_node;
    else{
        Node* t = head;
        while(t->next!=NULL)
            t= t->next;
        t->next = new_node;
    }
}

void print(Node* head){
    Node* t = head->next;
    while(t!=NULL ){
        cout<<t->data<<" ->";
        t= t->next;
    }
    cout<<endl;
    return;
}

int DetectStartingPoint(Node* head){
    Node* slow = head->next,*fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow = slow->next;
        if(fast ==slow){
            break;
        }
    }
    slow = head->next;
    int count=0;
    while(fast->next!=slow->next){
        fast = fast->next;
        slow = slow->next;
        count++;
    }
    fast->next =NULL;
    return count+2;
}

int main(){
    Node* head = new Node();
    head->next =NULL;
    int n;cin>>n;
    for(int i=1;i<=1;i++)
        append(head,i);   
    formloop(head,1);//this cannot have input 1 as it is case of circular linked list
    int pos = DetectStartingPoint(head);
    cout<<pos<<endl;
    print(head);
return 0;
}