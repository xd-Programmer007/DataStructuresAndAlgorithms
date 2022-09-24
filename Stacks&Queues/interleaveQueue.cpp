#include<bits/stdc++.h>
using namespace std;


void interleave(queue<int>& q,int n){
    stack<int> s;
    for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<n/2;i++){
        q.push(q.front());
        q.pop();
    }
    for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
}

// n has to be even
int main(){
    queue<int> q;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        q.push(k);
    }
    interleave(q,n);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}