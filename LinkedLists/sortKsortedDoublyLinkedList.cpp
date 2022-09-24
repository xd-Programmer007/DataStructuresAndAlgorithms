#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};

struct Node* sortAKSortedDLL(struct Node* head, int k)
{
    if(head == NULL || head->next == NULL)
        return head;
  
    // perform on all the nodes in list
    for(Node *i = head->next; i != NULL; i = i->next) {
        Node *j = i;
          // There will be atmost k swaps for each element in the list
        // since each node is k steps away from its correct position
        while(j->prev != NULL && j->data < j->prev->data) {
              // swap j and j.prev node
            Node* temp = j->prev->prev;
            Node* temp2 = j->prev;
            Node *temp3 = j->next;
            j->prev->next = temp3;
            j->prev->prev = j;
            j->prev = temp;
            j->next = temp2;
            if(temp != NULL)
                temp->next = j;
            if(temp3 != NULL)
                temp3->prev = temp2;
        }
          // if j is now the new head
       // then reset head
        if(j->prev == NULL)
            head = j;
    }
    return head;
}

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

void Solve(){
    Node* head =NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        append(&head,k);
    }
    int k;cin>>k;
   head = sortAKSortedDLL(head,k);
   print(head);
}

int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}