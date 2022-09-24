#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n,m;cin>>n>>m;
    vector<int> v(n),w(m);
    for(auto &i:v)cin>>i;
    for(auto &i:w)cin>>i;
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    for(int i=m-1;i>=0;i--){
        if(w[i]<v[n-1]){
            swap(w[i],v[n-1]);
            sort(v.begin(),v.end());
        }
    }
    for(auto i:v)
        cout<<i<<" ";
    for(auto i:w)
        cout<<i<<" ";
}

 
int main(){
int t;
cin>>t;
while(t--);
Solve();
return 0;
}