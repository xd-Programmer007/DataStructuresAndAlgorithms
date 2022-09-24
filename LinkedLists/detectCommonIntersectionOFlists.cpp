#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

//Function to find intersection point in Y shaped Linked Lists.
int detectLoop(Node* head){
    Node* fast= head->next->next,*slow = head->next;
    while(fast!=NULL && fast->next!=NULL){
        if(fast==slow)
            break;
        fast = fast->next->next;
        slow = slow->next;
    }
    if(fast==slow){
        slow =head;
        while(fast!=slow){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow->data;
}
int intersectPoint(Node* head1, Node* head2)
{

    Node* t2 = head2;
    while(t2->next!=NULL){
        t2=t2->next;
    }
    t2->next = head2;
    int num = detectLoop(head1);
    return num;
}

