#include<bits/stdc++.h>
using namespace std;

bool find3Numbers(vector<int> v, int x)
    {    int n = v.size();
        sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++){
        int l = i+1,r=n-1;
        while(l<r){
            int sum = v[i]+v[l]+v[r];
            if(sum>x)
                r--;
            else if(sum==x)
                return true;
            else 
                l++;
        }
    }
    return false;
    }

void Solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    string s = (find3Numbers(v,k))?"TRUE":"FALSE";
    cout<<s<<endl;

}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}