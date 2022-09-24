#include<bits/stdc++.h>
using namespace std;

#define ll long long int
// bool check(ll a,ll sum){
//     int exp = pow(a-1,2) + 4*sum;
//     int index = sqrt(exp);
//     if(pow(index,2) == exp){
//         exp += (1-a);
//         if(exp%2 == 0)
//             return true;
//         return false;
//     }
//     return false;

// }
ll check(ll s,ll n){
    if((s - n*n)%n == 0){
        return  (s - n*n)/n +1;
    }
    return -1;
}
void Solve(){
        ll sum;cin>>sum;
        ll n=1,count =0;
        if(sum%2 == 0)
            n = 2;
        while(n<=sqrt(sum)){
            ll a = check(sum,n);
            if(a!=-1 && a%2!=0)
                count++;
            n+=2;
        }
        cout<<count<<endl;
}
 
int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}