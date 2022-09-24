#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll findSubarray(vector<ll> arr,int n){
    ll sum = 0,counter=0;
    unordered_map<ll,ll> mp;

    for(int i=0;i<n;i++)
    {
        sum+= arr[i];
        if(sum==0)
            counter++;
        if(mp.count(sum)!=0)
        {
            counter += mp[sum];
        }
        mp[sum]++;
    }
    return counter;
}
void Solve(){
    int n;cin>>n;
    vector<ll> v(n);
    for(auto &i:v)cin>>i;
    cout<<findSubarray(v,v.size())<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}