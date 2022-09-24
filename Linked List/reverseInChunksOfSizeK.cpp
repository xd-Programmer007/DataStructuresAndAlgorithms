#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


class Solution
{
    public:

    node *reverse (node *head, int k)
    { 
        // Complete this method
        node* curr =head,*prev = NULL,*nxt =NULL;
        int count =0;
        while(count<k && curr!=NULL){
            nxt = curr->next;
            curr->next = prev;
            prev=curr;
            curr =nxt;
            count++;
        }
        if(nxt!=NULL)
            head->next = reverse(nxt,k);
        return prev;
    }
        
};


int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}
