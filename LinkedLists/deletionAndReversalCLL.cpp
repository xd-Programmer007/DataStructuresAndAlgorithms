#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};

Node *pre=NULL;

void deleteNode(Node **head,int data);
void reverse(Node **head);

void push(struct Node **head_ref, int data)
{
	
        struct Node *curr = new Node(data);

        curr->next=curr;
    
    	if(*head_ref==NULL)
        {
            *head_ref=curr;
            curr->next=*head_ref;
            pre=*head_ref;
    
        }
        else
        {
            curr->next=*head_ref;
            pre->next=curr;
            pre=pre->next;
    
    
        }
}

/* Function to print nodes in a given
circular linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	if (head != NULL)
	{
		do
		{
			printf("%d ", temp->data);
			temp = temp->next;
		}
		while (temp != head);
	}
    else
    cout<<"empty"<<endl;

	printf("\n");
}
/* Driver program to test above functions */
int main()
{

	/* Initialize lists as empty */
	int t,a,delnode;
	cin>>t;
	while(t--)
	{
        pre=NULL;
	   Node *head=NULL;
      
        int n;
	    cin>>n;
	    while(n--)
	    {
	        cin>>a;
	        push(&head,a);
	    }    
	/* Created linked list will be 2->5->7->8->10 */
	cin>>delnode;

	deleteNode(&head, delnode);
	
	reverse(&head);

	printList(head);
}
	return 0;
}


Node *reverse(struct Node* head){
    if(head==NULL || head->next == NULL)
        return head;
    Node* new_head = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
}
void deleteNode(struct Node **head, int key)
{
    struct Node* t = *head;
    while(t->next->data!=key){
        t=t->next;
    }
    Node* dele = t->next;
    t->next = t->next->next;
    delete dele;
}

 void reverse(struct Node** head_ref)
{
    Node *curr = *head_ref;
    Node* prev =NULL;
    Node* nxt;
    while(curr->next!=NULL){
        nxt = curr->next;
        curr->next = prev;
        prev= curr;
        curr=nxt;
    }
    curr->next = prev;
    *head_ref = prev;
    
}