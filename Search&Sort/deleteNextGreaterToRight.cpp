// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node* reverse(Node* head){
        if(head==NULL || head->next==NULL)
            return head;
        Node* newnode= reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newnode;
    }
    
    Node *compute(Node *head)
    {
        // your code goes here
        head = reverse(head);
        int maxi = head->data;
        Node* prev =head,*curr = head->next;
        while(curr!=NULL){
            if(curr->data <maxi){
                prev->next = curr->next;
            }
            else {
                maxi = max(maxi,curr->data);
                prev =curr;
            }
            curr =curr->next;
            
        }
        head = reverse(head);
        return head;
    }
    
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends