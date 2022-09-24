// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long int> m;
        for(long long i=0;i<n;i++)
            m.push(-arr[i]);
        long long cost =0;
        while(m.size()>1){
            long long k = -m.top();
            m.pop();
            long long l= -m.top();
            m.pop();
            cost += k+l;
            m.push(-(k+l));
        }
        return cost;
            
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends