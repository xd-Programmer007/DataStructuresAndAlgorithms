#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int l=0,r=n-1;
    while(l<=r){
        if(v[l]<0)l++;
        else if(v[l]>0 && v[r]>0)r--;
        else swap(v[l++],v[r--]);
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