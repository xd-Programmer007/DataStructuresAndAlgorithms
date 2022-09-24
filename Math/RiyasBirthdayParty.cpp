//This series was like 1,6,15,28,45... here An = (An-1 + 2)*2 - An-2
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007


int main() {
	int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        n =n%MOD;
        cout<<(n *((2*n)%MOD-1))%MOD<<endl;
    }
}

