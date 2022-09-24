#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll  long long
ll binpow(ll a, ll b) {
    a %=  MOD;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a %  MOD;
        b >>= 1;
    }
    return res;
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int g=a[0];
    for(int i=0;i<n;i++){
        g = __gcd(g,a[i]);
    }
    ll  ans =1;
    for(int i=0;i<n;i++){
        ans = ans*binpow(a[i],g)%MOD;
    }
    cout<<ans<<endl;
    return 0;
}
