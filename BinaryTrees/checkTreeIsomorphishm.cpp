// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


 // } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    void solve(Node* root,unordered_map<int,vector<int>>& m){
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            Node* curr = q.front().first;
            int lvl = q.front().second;
            m[lvl].push_back(curr->data);
            if(curr->left)
                q.push({curr->left,lvl+1});
            if(curr->right)
                q.push({curr->right,lvl+1});
            q.pop();
        }
    }
    bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
        unordered_map<int,vector<int>>m1,m2;
        solve(root1,m1);
        solve(root2,m2);
        for(auto i=m1.begin();i!=m1.end();i++){
            vector<int> it1 = i->second;
            vector<int> it2 = m2[i->first];
            sort(it1.begin(),it1.end());
            sort(it2.begin(),it2.end());
            for(int j=0;j<it1.size();j++){
                if(it1[j]!=it2[j])
                    return 0;
            }
        }
        return 1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		Node* root1 = buildTree(s1);
		Node* root2 = buildTree(s2);
		Solution obj;
		if(obj.isIsomorphic(root1,root2))
		    cout<<"Yes"<<endl;
		else
		    cout<<"No"<<endl;
    }
    return 0;
}
  // } Driver Code Ends