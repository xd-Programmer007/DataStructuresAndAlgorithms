#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* head =new Node();

void push(int data){
    Node* new_node = new Node();
    new_node ->data = data;
    if(head->next==NULL)
        head->next = new_node;
    else{
        new_node->next = head->next;
        head->next = new_node;
    }
}

void print(){
    Node* t = head->next;
    while(t!=NULL){
        cout<<t->data<<"->";
        t =t->next;
    }
}

Node*  reverse_iterative(){
        Node* prevptr = NULL;
        Node* currptr = head;
        Node* nextptr;
        while(currptr!=NULL){
            nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
        }
        return prevptr;
}

Node* reverse_recursive(Node* head){
        if(head == NULL||head->next == NULL)
            return head;
        Node* newhead = reverse_recursive(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
}

void Solve(){
        //iterative method
        for(int i=1;i<10;i++)
            push(i);
        print();
        cout<<endl;
        head = reverse_iterative();
        print();
        cout<<"\n";
        head = reverse_recursive(head);
        print();
        
}
 
int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}