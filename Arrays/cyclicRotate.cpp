#include<bits/stdc++.h>
using namespace std;
 
 
void Solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    //rotate right by k
    vector<int> t(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k-1);
    reverse(v.begin()+k-1,v.end());
    reverse(v.begin(),v.end());
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
    //This is left rotate by k
       reverse(t.begin(),t.begin()+n-k+1);
    reverse(t.begin()+n-k+1,t.end());
    reverse(t.begin(),t.end());
    for(auto i:t)
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
 