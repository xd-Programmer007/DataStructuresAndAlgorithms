#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    int max_height = 0;
    if(v[n-1]-k > v[n-2]+k)max_height = v[n-1]+k;
    else max_height = v[n-2]+k;
    cout<<max_height-(v[0]+k)<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}