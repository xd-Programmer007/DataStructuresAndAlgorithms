#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int maxi = 0,curr_sum =0;
    for(int i=0;i<n;i++){
        curr_sum = max(curr_sum+v[i],0);
        maxi = max(maxi,curr_sum);
    }
    maxi = max(curr_sum,maxi);
    cout<<maxi<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}