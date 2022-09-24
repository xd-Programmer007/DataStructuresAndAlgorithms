#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
        int n;cin>>n;
        vector<int> v(n);
        for(auto &i:v)cin>>i;
        bool f = false;
        //check if there is a zero element;
        vector<int> sum(n);
        sum[0]=v[0];
        for(int i=1;i<n;i++){
            sum[i]+= sum[i-1]+v[i];
        }
        sort(sum.begin(),sum.end());
        for(int i=0;i<n-1;i++){
            if(sum[i]==sum[i+1])
                f=true;
        }
        for(auto i:sum)
            if(i==0)
                f = true;
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}