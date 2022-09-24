#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};

void append(Node** head, int new_data)
{
   struct Node* newNode = new Node;
  
   struct Node* last = *head;
   newNode->data = new_data;
    newNode->next = NULL;
     if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
}
while (last->next != NULL)
last = last->next;
last->next = newNode;
  
newNode->prev = last;
return;
}
int countPairs(Node* first,Node* second,int value){
    int count = 0;
    while(first!=NULL && second!=NULL && first!=second && second->next!=first){
        long long sum = first->data + second->data;
        if( sum == value)
            count++,first = first->next,second = second->prev;
        else if(sum >value)
            second  = second->prev;
        else 
            first = first->next;
        
    }
    return count;
}

int pairSum(Node* head,int k){
    if(head==NULL)
        return 0;
    int count =0;
    Node *curr ,*first,*last;
    last = head;
    while(last->next!=NULL)
        last = last->next;
    
    for(curr = head;curr != NULL;curr= curr->next){
        first = curr->next;
        count += countPairs(first,last, k- curr->data);
    }
    return count;
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
    int x;cin>>x;
    cout<<pairSum(head,x)<<endl;

}

int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}