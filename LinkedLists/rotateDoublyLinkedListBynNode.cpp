#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};

void append(Node** head, int new_data)
{
   //allocate memory for node
   struct Node* newNode = new Node;
  
   struct Node* last = *head; //set last node value to head
  
   //set data for new node
   newNode->data = new_data;
  
   //new node is the last node , so set next of new node to null
   newNode->next = NULL;
  
   //check if list is empty, if yes make new node the head of list
   if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
}
  
//otherwise traverse the list to go to last node
while (last->next != NULL)
last = last->next;
  
//set next of last to new node
last->next = newNode;
  
//set last to prev of new node
newNode->prev = last;
return;
}

void print(Node* head){
    Node* t = head;
    while(t!=NULL)
        cout<<t->data<<" ",t=t->next;
}

void rotate(Node* &head,int pos){
    if(pos == 0)return ;

    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    head->prev = temp;

    int count =1;
    while(count<=pos){
        head = head->next;
        temp =temp->next;
        count++;
    }
    temp->next = NULL;
    head->prev  =NULL;
}

void Solve(){
    Node* head =NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        append(&head,k);
    }
    // print(head);
    int k;cin>>k;
    rotate(head,k);
    print(head);
}

int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}