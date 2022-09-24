#include<bits/stdc++.h>
using namespace std;
 

void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int l=0,m=0,h=n-1;
    while(m<=h){
        if(v[m]==0)swap(v[m++],v[l++]);
        else if(v[m]==1)m++;
        else swap(v[m],v[h--]);
    }
    for(auto i:v)
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