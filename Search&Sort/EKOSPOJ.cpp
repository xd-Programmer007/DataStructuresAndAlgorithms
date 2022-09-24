#include<bits/stdc++.h>
using namespace std;

#define ll long long  

bool isGood(vector<ll> v,ll new_mini,ll k){
        ll wood_count =0;
        for(auto i:v){
            wood_count += max((ll)0,i - new_mini);
        }
        wood_count = max((ll)0,wood_count);
        // cout<<new_mini<<" "<<wood_count<<endl;
        return (wood_count>=k);

}
void Solve(){
    ll n,k;cin>>n>>k;
    vector<ll> v(n);
    for(auto &i:v)cin>>i;
    ll sum =0;
    for(auto i:v)
        sum+= i;
    ll l=0,r = sum;
    while(l<r-1){
        ll m = (l)+(r-l)/2;
        // cout<<m<<endl;
        if(isGood(v,m,k)){
            l = m;
        }
        else    
            r = m;
    }
    cout<<l<<endl;
}
 
int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}