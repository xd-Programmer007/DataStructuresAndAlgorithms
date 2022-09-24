#include <bits/stdc++.h>

using namespace std;

#define MOD 1000003
#define ll long long
int main() {
    ll arr[MOD]={0};
    arr[0]=1;
    for(int i=1;i<MOD;i++){
        arr[i] = (arr[i-1] * i)%MOD;
    }
    int t;cin>>t;
    while(t--){
        ll n,x;cin>>n>>x;
        if(n>MOD)
            cout<<0<<endl;
        else
            cout<<(arr[n]*x)%MOD<<endl;
    }
    return 0;
}


