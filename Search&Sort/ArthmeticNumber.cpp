#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
        int A,B,C;cin>>A>>B>>C;
        if(A==  B){
            cout<<1;
            return ;
        }
        else if( (C!=0 && (B-A)%C==0)){
            if((B-A)/C >=0){
                cout<<1;
                return;
            }
            cout<<0;
            return ;
        }
        cout<<0;
        return ;
}
 
int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}