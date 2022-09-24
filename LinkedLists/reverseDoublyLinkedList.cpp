#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data_)
};

Node* head = new Node();

void push(int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = head;
    if(head!=NULL)
        head->prev = new_node;
    head = new_node;

}
void printList()
{
    Node* t = head;
    while(t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}

void Solve(){
    push(6);
    push(7);
    push(8);
    printList();

}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}