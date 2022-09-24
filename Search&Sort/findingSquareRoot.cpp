#include<bits/stdc++.h>
using namespace std;
 
bool good(double m,int n){
    return m*m<=n;
}
void Solve(){
    int n;cin>>n;
    double l=-1,r = 1e9;
    for(int i=0;i<100;i++){
        double m = (r+l)/2;
        if(good(m,n)){
            l=m;
        }
        else 
            r = m;
    }
    cout<<l<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}