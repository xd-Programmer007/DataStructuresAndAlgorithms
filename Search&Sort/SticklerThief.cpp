#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)
        cin>>i;
    int dp[n] ={0};
    dp[0] = v[0];
    dp[1] = max(v[0],v[1]);
    for(int i=2;i<n;i++){
        dp[i] = max(dp[i-2]+v[i],dp[i-1]);
    }
    cout<<dp[n-1]<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}