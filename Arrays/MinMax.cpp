#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int maxi = *max_element(v.begin(),v.end());
    int mini = *min_element(v.begin(),v.end());
    cout<<"Max is "<<maxi<<" Min is "<<mini<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}