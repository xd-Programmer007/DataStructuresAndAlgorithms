#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll g,x,y;

void extendedEA(ll a,ll b){
    if(b == 0){
        g = a;
        x =1;
        y =0;
    }
    else{
        extendedEA(b,a%b);
        ll temp =x;
        x = y;
        y = temp - (a/b)*y;

    }
}
void Solve(){
    ll a,m;cin>>a>>m;
    extendedEA(a,m);
    cout<<((x%m + m)%m)<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--)
Solve();
return 0;
}