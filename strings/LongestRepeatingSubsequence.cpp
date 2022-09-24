#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    string s;cin>>s;
    int n = s.length();
    int dp[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n;j++){
            if(s[i-1]==s[j-1] && i!=j)
                dp[i][j] = 1+ dp[i-1][j-1];
            else 
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n][n]<<endl;

}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}