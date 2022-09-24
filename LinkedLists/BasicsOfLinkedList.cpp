#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class LinkedList{
    Node* head=new Node();
    public:

    Node* getHead(){
        return head;
    }
    void setHead(Node* new_head){
        head = new_head;
    }

    void push(int data_){
        Node* new_node = new Node();
        new_node->data = data_;
        if(head->next==NULL){
            head->next = new_node;
            new_node->next = NULL;
        }
        else{
            new_node->next = head->next;
            head->next = new_node;
        }
    }
    void delete_(int pos){
        if(head->next == NULL){
            return;
        }
        Node* t = head;
        pos--;
        while(pos--)
            t= t->next;
        t->next = t->next->next;

    }
    void append(int data_){
        Node* t = head;
        Node* new_node = new Node();
        new_node->data =data_;
        while(t->next!=NULL){
            t = t->next;
        }
        t->next = new_node;
        new_node->next = NULL;
    }
    void insert(int pos,int data_){
        Node* t = head;
        Node* new_node = new Node();
        new_node->data = data_;
        pos--;
        while(pos--){
            t = t->next;
        }
        new_node->next =t->next;
        t->next = new_node;
    }
    void print(){
        Node* t = head->next;
        while(t !=NULL){
            cout<<t->data<<"->";
            t= t->next;
        }
        cout<<endl;
    }


};

void Solve(){
    LinkedList ll;
    ll.push(5);
    ll.push(6);
    ll.push(7);
    ll.insert(3,3);
    ll.append(10);
    ll.delete_(3);
    ll.print();
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}