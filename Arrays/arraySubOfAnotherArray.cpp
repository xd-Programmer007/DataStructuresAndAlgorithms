#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string isSubset(int*a ,int*b,int n,int m){
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        bool f =true;
        for(int i=0;i<m;i++){
            if(!mp[b[i]])
                f=false;
        }
        string s = (f)?"Yes":"No";
        return s;
    }
};

void Solve(){
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    Solution Obj;
    cout<<Obj.isSubset(a,b,n,m)<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}