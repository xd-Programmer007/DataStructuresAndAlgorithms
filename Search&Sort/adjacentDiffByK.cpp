#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n,x,k;cin>>n>>x>>k;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    //we have to find "x" given that the numbers differ by atmost k;
    int index =-1,diff=0;
    for(int i=0;i<n;i+= (diff/k)){
        if(v[i]==x){
            index =i;
            break;
        }
        diff = abs(x - v[i]);
    }
    if(index==-1)
        cout<<"NOT There";
    else  
        cout<<index;
    cout<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}