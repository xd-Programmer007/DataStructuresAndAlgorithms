#include<bits/stdc++.h>
using namespace std;
 
long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long long int diff = a[m-1]-a[0];
    for(int i=1;m-1+i<n;i++){
        diff = min(a[m-1+i]-a[i],diff);
    }   
    return diff;
}  

void Solve(){
    long long int n,m;cin>>n>>m;
    vector<long long int> v(n);
    for(auto i:v)cin>>i;
    cout<<findMinDiff(v,n,m)<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}