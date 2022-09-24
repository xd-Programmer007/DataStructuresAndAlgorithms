//This is extended Euclidean Algorithm T.C(O(log(max(A,B))))
#include<bits/stdc++.h>
using namespace std;

#define ll long long
void extendedEuclideanAlgorithm(ll a,ll b,ll& x,ll& y,ll& g){
    if(b==0){
        g = a;
        x=1;
        y =0;
    }
    else{
        extendedEuclideanAlgorithm(b,a%b,x,y,g);
        int temp =x;
        x = y;
        y = temp - (a/b)*y;
    }
}
void Solve(){
    ll a,b,x,y,g;cin>>a>>b;
    extendedEuclideanAlgorithm(a,b,x,y,g);
    cout<<"The gcd is "<<g<<endl;
    cout<<"The coeffiecients are "<<x<<" "<<y<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--)
Solve();
return 0;
}