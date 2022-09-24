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

Node* reverse(Node* head){
	if(head==NULL ||head->next==NULL)
		return head;
	Node* curr = head;
	Node* ford = head;
	while(curr->next!=NULL){
		ford = curr->next;
		curr->next = curr->prev;
		curr->prev = ford;
		curr =ford;
	}
	curr->next = curr->prev;
	curr->prev = NULL;
	return curr;
}
void print(Node* head){
    Node* t = head;
    while(t!=NULL)
        cout<<t->data<<" ",t=t->next;
}

void Solve(){
    Node* head =NULL;
    for(int i=1;i<11;i++)
        append(&head,i);
    print(head);
    cout<<endl;
    head = reverse(head);
    print(head);
}

int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}
