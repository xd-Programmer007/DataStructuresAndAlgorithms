#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


class Solution{
  public:
    bool isPalindrome(Node *head)
    {
        int length =0;
        Node* t = head;
        while(t!=NULL)
            length++,t =t->next;
        if(length==1)
            return true;
        int cnt = length/2;
        t =head;
        while(--cnt){
            t =t->next;
        }
         Node* curr = (length%2!=0)?t->next->next:t->next;
         Node* prev =NULL;
         Node* nxt;
         while(curr!=NULL){
             nxt =curr->next;
             curr->next = prev;
             prev =curr;
             curr =nxt;
         }
         t->next =NULL;
        Node* h2 =prev,*h1=head;
        while(h1!=NULL && h2!=NULL)
        {
            if(h1->data!=h2->data)
                return false;
            h1 = h1->next,h2 = h2->next;
        }
        return true;
    }
};


int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}