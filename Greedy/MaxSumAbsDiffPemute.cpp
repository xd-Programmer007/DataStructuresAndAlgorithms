#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    if(n==1){
        cout<<v[0]<<endl;
        return;
    }
    sort(v.begin(),v.end());
    vector<int > ans;
    int i=0,j=n-1;
    int sum =0;
    while(i<=j){
        ans.push_back(v[i++]);
        ans.push_back(v[j--]);
    }
    for(int i=0;i<n-1;i++){
        sum += abs(ans[i+1]-ans[i]);
    }
    sum+= abs(ans[n-1]-ans[0]);
    cout<<sum<<endl;
}
 
int main(){
int t=1;
// cin>>t;
while(t--)
Solve();
return 0;
}