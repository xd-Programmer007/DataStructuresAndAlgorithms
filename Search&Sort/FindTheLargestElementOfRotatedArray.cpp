#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int> v,int l ,int h,int lb,int ub){
    int m = l + (h-l)/2;
    if(m == lb){
        if(m == ub  )
            return m;
        else if(v[m] >= v[m+1])
            return m;
    }
    else if(m == ub){
        if(v[m]>v[m-1])
            return m;
    }
    else{
        if(v[m]>=v[m+1] && v[m]>=v[m-1])
            return m;
        else if(v[m]>v[h])
            return peakElement(v,m+1,h,lb,ub);
        else if(v[m]<v[h])
            return peakElement(v,l,m-1,lb,ub);
    }
    return -1;
}

void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    cout<<peakElement(v,0,n-1,0,n-1)<<endl;
}
 
int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}