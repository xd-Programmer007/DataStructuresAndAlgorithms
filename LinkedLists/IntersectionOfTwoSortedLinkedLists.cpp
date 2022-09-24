#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node* reverse(Node* head){
        if(head==NULL ||head->next ==NULL)
            return head;
        Node* new_head = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return new_head;
    }
    void push(Node* head,int data){
        Node* newNode = new Node(data);
        newNode->next = head->next;
        head->next= newNode;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverse(first);
        second = reverse(second);
        Node* newHead = new Node(0);
        int sum =0,carry =0;
        while(first!=NULL || second!=NULL){
            bool f = (first!=NULL),s=(second!=NULL);
            sum = carry;
            if(f)
                sum += (first->data);
            if(s)
                sum += (second->data);
            carry = sum/10;
            push(newHead,sum%10);
            if(f)first = first->next;
            if(s)second=second->next;
        }
        if(carry){
            push(newHead,1);
        }
        return newHead->next;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends