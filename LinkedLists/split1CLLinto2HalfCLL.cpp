#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};


void splitList(Node *head, Node **h1, Node **h2)
{
    Node* s = head,*f =head;
    while(f->next!=head && f->next->next!=head){
        s=s->next;
        f=f->next->next;
    }
    *h1 = head;
    *h2 = s->next;
    s->next = head;
    if(f->next==head)
        f->next=*h2;
    else
        f->next->next;
}

void Solve(){
    Node* head = new Node;
    head->next = new Node;
    head->next->data =10;
    head->next->next=new Node;
    head->next->next->data = 12;
    head->next->next->next = new Node;
    head->next->next->next->data = 15;
    head->next->next->next = head->next;
    Node* t1=head,*t2 =head;
    splitList(head,&t1,&t2);
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}