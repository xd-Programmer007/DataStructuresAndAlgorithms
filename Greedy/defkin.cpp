#include<bits/stdc++.h>
using namespace std;


void Solve(){
    int w,h,n;cin>>w>>h>>n;
    vector<int> x_corr,y_corr;
    x_corr.push_back(0);
    y_corr.push_back(0);
    while(n--){
        int x,y;cin>>x>>y;
        x_corr.push_back(x);
        y_corr.push_back(y);
    }
    x_corr.push_back(w+1);
    y_corr.push_back(h+1);
    sort(x_corr.begin(),x_corr.end());
    sort(y_corr.begin(),y_corr.end());
    int mx = 0,my=0;
    for(int i=1;i<x_corr.size();i++){
        mx = max(mx,x_corr[i]-x_corr[i-1]-1);
        my = max(my,y_corr[i]-y_corr[i-1]-1);
    }
    cout<<mx*my<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--)
Solve();
return 0;
}