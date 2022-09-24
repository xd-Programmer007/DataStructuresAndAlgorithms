// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List Node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print Nodes in a given linked list */
void printList(Node* Node)
{
	while (Node != NULL)
	{
		printf("%d ", Node->data);
		Node = Node->next;
	}
	cout<<endl;
}

 // } Driver Code Ends
/*Linked list Node structure

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

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node *merge(Node *head1, Node *head2){
       Node *result = NULL;
       if (head1 == NULL) {
          return head2;
       }
       if (head2 == NULL) {
          return head1;
       }
       if (head1->data < head2->data) {
          result = head1;
          result->next = merge(head1->next, head2);
       } else {
          result = head2;
          result->next = merge(head1, head2->next);
       }
       return result;
    }
    
    Node * mergeKLists(Node *arr[], int k)
    {
           // Your code here
            if(k==1)
                return arr[0];
            Node* head = arr[0];
            for(int i=1;i<k;i++){
                head = merge(head,arr[i]);
            }
            return head;
    }
};



// { Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
  // } Driver Code Ends