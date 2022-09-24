#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n,m;cin>>n>>m;
    vector<int> x(n),y(m);
    for(auto &i:x)cin>>i;
    for(auto &j:y)cin>>j;
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    //Union
    int a1=0,a2=0;
    vector<int> ans;
    while(a1<n && a2<m){
        if(x[a1]<y[a2])
            ans.push_back(x[a1]),a1++;
        else if(x[a1]>y[a2])
            ans.push_back(y[a2]),a2++;
        else
            ans.push_back(x[a1]),a1++,a2++;
    }
    while(a1<n){
        ans.push_back(x[a1++]);
    }
    while(a2<m){
        ans.push_back(y[a2++]);
    }
    a1=0,a2=0;
    vector<int> ans_;
    while(a1<n && a2<m){
        if(x[a1]<y[a2])
            a1++;
        else if(x[a1]>y[a2])
            a2++;
        else
            ans_.push_back(x[a1]),a1++,a2++;
    }
    cout<<"The Union of the array's is  "<<endl;
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
    cout<<"The Intersection of the array's is "<<endl;
    for(auto i:ans_)
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