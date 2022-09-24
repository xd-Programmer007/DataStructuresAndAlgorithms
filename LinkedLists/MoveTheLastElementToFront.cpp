#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

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

void LastToFirst(Node** head){
    if(*head ==NULL || (*head)->next ==NULL)
        return;
    Node* p = *head,*h = (*head)->next;
    while(h->next!=NULL){
        h=h->next;
        p=p->next;
    }
    h->next = (*head)->next;
   (* head)->next = h;
    p->next =NULL;

}

int main(){
    Node* head =new Node();
    head->next =NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        append(head,k);
    }
    print(head);
    LastToFirst(&head);
    print(head);

return 0;
}