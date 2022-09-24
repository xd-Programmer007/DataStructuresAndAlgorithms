#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n,a,b;cin>>n>>a>>b;
    vector<int> v(n);
    for(auto &i:v)cin>>i;

    int l=0,i=l-1,h=v.size();
    for(int j=0;j<h;j++){
        if(v[j]<a){
            i++;
            swap(v[j],v[i]);
        }
    }
    int k=i+1;
    for(int j=k;j<h;j++){
        if(a == v[j]||v[j]<=b){
            swap(v[j],v[k]);
            k++;
        }
    }
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}