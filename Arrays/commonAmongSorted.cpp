#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int m,n,o;cin>>m>>n>>o;
    vector<int> x(m),y(n),z(o);
    for(auto &i:x)cin>>i;
    for(auto &i:y)cin>>i;
    for(auto &i:z)cin>>i;
    int p1=0;int p2=0;int p3=0;
    vector<int> ans;
    while(p1<m && p2<n  && p3<o){
        if(x[p1]==y[p2] && y[p2]==z[p3]){
            int  r = x[p1];
            ans.push_back(r);
            while(x[p1]==r)p1++;
            while(y[p2]==r)p2++;
            while(z[p3]==r)p3++;
        }
        while(x[p1] <max(y[p2],z[p3]))p1++;
        while(y[p2]<max(x[p1],z[p3]))p2++;
        while(z[p3]<max(x[p1],y[p2]))p3++;
    }
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}