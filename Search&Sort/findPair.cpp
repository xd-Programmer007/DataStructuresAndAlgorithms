#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    int p1 = 0,p2=1;
    while(p2<n){
        int diff = v[p2]- v[p1];
        if(diff == k && p1!= p2)
            cout<<"True";
        else if( diff<k)
            p2++;
        else
            p1++;
    }
    if(p2==n-1)
        cout<<"False";
    cout<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}