// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        map<char,char> rev={
            {'}','{'},
            {')','('},
            {']','['} 
        };
        int i=0;
        while(i<x.length()){
            if(s.empty() ||s.top() != rev[x[i]]){
                s.push(x[i]);
            }
            else 
                s.pop();
            // if(!s.empty())cout<<s.top()<<" ";
            i++;
        }
        return s.empty();
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends