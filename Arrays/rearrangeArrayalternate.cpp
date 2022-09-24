#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int p1 = 0,p2=n-1;
    while(p1<=p2){
        if(v[p1]>=0){
            p1++;
        }
        else if(v[p1]<0 && v[p2]>=0){
            swap(v[p1++],v[p2]);
        }
        else{
            p2--;
        }
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