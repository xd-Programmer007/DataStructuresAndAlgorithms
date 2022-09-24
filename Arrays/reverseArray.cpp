#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    reverse(v.begin(),v.end());
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