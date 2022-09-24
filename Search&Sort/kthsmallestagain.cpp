#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    int n,q;cin>>n>>q;
    vector<pair<ll,ll>> vp;
    for(int i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end());
    ll idx = 0;
    for(int i=1;i<n;i++){
        if(vp[idx].second >= vp[i].first){
            vp[idx].second = max(vp[idx].second,vp[i].second);
        }
        else{
            idx++;
            vp[idx] = vp[i];
        }
    }
    while(q--){
        ll k;cin>>k;
        ll ans = -1;
        for(int i=0;i<=idx;i++){
            if((vp[i].second - vp[i].first +1 )>=k){
                ans = vp[i].first +k -1;
                break;
            }
            else{
                k -= (vp[i].second - vp[i].first +1);
            }
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
return 0;
}