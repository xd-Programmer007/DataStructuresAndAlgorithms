#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt[1000001]={0};
    int ans=-1;
    for(int i=0;i<n;i++){
        cnt[a[i]]++;
        if(cnt[a[i]]>(n/2))
            ans =a[i];
    }
    cout<<ans<<endl;

}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}