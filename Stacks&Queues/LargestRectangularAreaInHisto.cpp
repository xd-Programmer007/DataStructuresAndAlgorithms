// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    void lsr(long long arr[],int n,vector<int>& v){
        stack<int> st;
        for(int i=0;i<n;i++){
            if(st.empty())
                v.push_back(0);
            else if(arr[st.top()]<arr[i]){
                v.push_back(st.top()+1);
            }
            else{
                while(st.size()>0 && arr[st.top()]>=arr[i])
                    st.pop();
                if(st.empty())
                    v.push_back(0);
                else
                    v.push_back(st.top()+1);
            }
            st.push(i);
        }
    }
    void rsr(long long arr[],int n,vector<int>& v){
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(st.empty())
                v.push_back(n-1);
            else if(arr[st.top()]<arr[i]){
                v.push_back(st.top()-1);
            }
            else{
                while(st.size()>0 && arr[st.top()]>=arr[i])
                    st.pop();
                if(st.empty())
                    v.push_back(n-1);
                else
                    v.push_back(st.top()-1);
            }
            st.push(i);
        }
        reverse(v.begin(),v.end());
    }
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<int> vlr,vrl;
        lsr(arr,n,vlr);
        rsr(arr,n,vrl);
        long long curr=0,max_area=0;
        for(int i=0;i<n;i++){
            curr = arr[i]*(vrl[i]-vlr[i]+1);
            max_area = max(max_area,curr);
        }
        return max_area;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends