//This is gcd algorithm implementation its already available as __gcd in stdc++.h header file it works in O(log(max(a,b)))
#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll gcd(ll a,ll b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
void Solve(){
    ll a,b;cin>>a>>b;
    // we have to calculate gcd of a and b
    ll res =  gcd(a,b);
    cout<<res<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--)
Solve();
return 0;
}