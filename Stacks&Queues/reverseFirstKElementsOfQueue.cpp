// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
void rev(queue<int>& q){
    if(q.empty())
        return ;
    int a = q.front();
    q.pop();
    rev(q);
    q.push(a);
}
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    queue<int> q_,qf;
    while(k && !q.empty()){
        q_.push(q.front());
        q.pop();
        k--;
    }
    rev(q_);
    while(!q_.empty()){
        qf.push(q_.front());
        q_.pop();
    }
    while(!q.empty()){
        qf.push(q.front());
        q.pop();
    }
    return qf;
}