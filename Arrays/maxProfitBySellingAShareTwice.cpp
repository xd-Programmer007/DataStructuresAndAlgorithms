#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int> prices(n);
    for(auto &i:prices)cin>>i;
    int sell1=0,sell2=0;
    int buy1=INT_MAX,buy2=INT_MAX;
    for(auto p:prices){
        buy1 = min(buy1,p);
        sell1 = max(sell1,p-buy1);
        buy2 = min(buy2,p-sell1);
        sell2 = max(sell2,p-buy2);
    }
    cout<<sell2<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}