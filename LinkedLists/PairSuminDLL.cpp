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

bool pairSum(Node* head,int k){
    if(head==NULL )
        {
        return false;}
    else if(head->next==NULL){
        return (k == head->data);
    }
    else{
            Node* p1 = head;
        Node* p2 = head;
        while(p2->next!=NULL){
            p2= p2->next;
        }
        while(p1!=p2 && p1->prev!=p2){
            long long sum = p1->data + p2->data;
            if( sum==k){
                return true;
            }
            else if(sum>k)
                p2 = p2->prev;
            else 
                p1 = p1->next;
        }
    }
    return false;
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