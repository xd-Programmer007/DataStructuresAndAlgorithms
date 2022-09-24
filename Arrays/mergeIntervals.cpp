#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<vector<int>> v(n,vector<int>(2));
    for(auto &i:v){
        for(auto &j:i){
            cin>>j;
        }
    }
    sort(v.begin(),v.end());
    if(v.size()==1)
        cout<<v[0][0]<<" "<<v[0][1]<<endl;
    else{
        vector<vector<int>>ans;
        pair<int,int> p ={v[0][0],v[0][1]};
        for(int i=0;i<n-1;i++){
            if(p.second<v[i+1][0]){
                vector<int> t(2);
                t[0] = p.first,t[1]=p.second;
                ans.push_back(t);
                p = {v[i+1][0],v[i+1][1]};
            }
            else{
                p.first = min(p.first,v[i+1][0]);
                p.second = max(p.second,v[i+1][1]);
            }
        }    
        vector<int> t(2);
        t[0]=p.first,t[1]=p.second;
        ans.push_back(t); 
        for(auto i:ans){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<"\n";
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