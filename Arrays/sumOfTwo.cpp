#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n,k;cin>>n>>k;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int p;cin>>p;
        m[p]++;
    }
    int count=0;
    for(auto it=m.begin();it!=m.end();it++){
        int a = it->first,b= k-it->first;
        if(it->second && m[b]){
            if(a == b && m[b]>=2){
                count++;
                it->second-=2;
            }
            else if(a!=b && m[b]){
                count++;
                it->second--,m[b]--;
            }
        }
    }
    cout<<count<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}