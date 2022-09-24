#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int> v(20000,0);
    v[0]=1;
    int dgits= 1,rem =0,carry=0,k=1;

    while(k<=n){
        for(int i=0;i<dgits;i++)
        {
                int prod = k*v[i]+carry;
                v[i] = prod%10;
                carry = prod/10;
        }
        while(carry){
            dgits++;
            v[dgits-1]=carry%10;
            carry/=10;
        }
        k++;
    }
    reverse(v.begin(),v.begin()+dgits);
    for(int i=0;i<dgits;i++)
        cout<<v[i];
    cout<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}