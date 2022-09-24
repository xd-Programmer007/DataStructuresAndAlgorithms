#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 

vector<ll> func(ll A[],int n,ll k){
    deque<ll> dq;
    vector<ll> ans;
    ll i=0;
    for(i=0;i<k;i++){
        if(A[i]<0)
            dq.push_back(i);
    }
    for(i=k;i<n;i++){
        if(!dq.empty())
            ans.push_back(A[dq.front()]);
        else   
            ans.push_back(0);
        while(!dq.empty() && dq.front()<=i-k){
            dq.pop_front();
        if(A[i]<0)
            dq.push_back(A[i]);
        }
    }
    if(!dq.empty())
        ans.push_back(A[dq.front()]);
    else 
        ans.push_back(0);
    return ans;
}