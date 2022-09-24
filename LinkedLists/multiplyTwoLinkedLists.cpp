#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

long long  multiplyTwoLists (Node* l1, Node* l2)
{
 //Your code here
 long long  first=0 , second=0;
 long long  mod = 1000000007;
 
 while(l1){
     first = first *10;
     first = first%mod + l1->data;
     l1= l1->next;
 }
 
 while(l2){
     second = second *10;
     second = second%mod + l2->data;
     l2 = l2->next;
 }
 
 return first%mod * second%mod;
}

void push(Node* head,int data){
    Node* newdata = new Node;
    newdata->data = data;
    newdata->next= head->next;
    head->next = newdata;
    
}
void Solve(){
    Node* head1 = new Node,*head2 = NULL;
    head1->next=NULL;
    for(int i=1;i<10;i++){
        push(head1,i);
    }
    for(int i=5;i<10;i++){
        push(head2,i);
    }
    cout<<head1->data<<endl;
    cout<<multiplyTwoLists(head1->next,head2->next)<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}