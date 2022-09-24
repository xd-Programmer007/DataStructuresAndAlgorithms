//This is binary exponentiation algorithm its time complexity is O(logn) && memory Com is O(logn) in recursive approach

#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define MOD 1000000007
ll binExp(ll b,ll p){
    if (p ==0)
        return 1;
    else if(p%2 !=0)
        return (b*binExp((b*b)%MOD,(p-1)/2))%MOD;
    return ((binExp(b,p/2)%MOD)*(binExp(b,p/2)%MOD))%MOD;
}
void Solve(){
    ll b,p;cin>>b>>p;
    ll res =binExp(b,p);
    cout<<res<<endl;
}

int main(){
int t;
cin>>t;
while(t--)
Solve();
return 0;
}