#include<bits/stdc++.h>
using namespace std;

bool binary_search(vector<int> v,int n,int key){
    int l = 0,h = n-1;
    while(l<=h){
        int m = (l+h)/2;
        if(v[m] == key)
            return true;
        else if(v[m]>key)
            h = m-1;
        else
            l =m+1;
    }
    return false;
}
void Solve(){
    int n,m;cin>>n;
    vector<int> v1(n),v2;
    for(auto &i:v1)cin>>i;
    cin>>m;
    v2.resize(m);
    for(auto &i:v2)cin>>i;
    int s1 = 0,s2 = 0,s_final = 0;
    // I will traverse n and want it to be smaller
    if(n>m){
        v1.swap(v2);
        n = v1.size(),m = v2.size();
    }
    //n is hence smaller now for sure n<=m
    int i;
    for(i=0;i<n;i++){
        bool f = binary_search(v2,m,v1[i]);
        if(f){
            s_final += max(s1,s2)+v1[i];
        }
        else
            s1 += v1[i],s2+= v2[i];
    }
    while(i<m)
        s_final += v2[i++];
    cout<<s_final<<endl;

}
 
int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}