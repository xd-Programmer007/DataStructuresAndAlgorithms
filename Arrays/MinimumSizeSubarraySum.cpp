#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n,target;cin>>n>>target;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int curr=1,min_len=1e9,t = target;
    for(int i=0;i<n;i++){
        if(t<=0){
            if(t<0)i--;
            min_len = min(min_len,curr);
            curr=1;
            t = target;
        }
        curr++,t-=v[i];
    }
   cout<<min_len;

}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}