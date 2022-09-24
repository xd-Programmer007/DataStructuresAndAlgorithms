#include<bits/stdc++.h>
using namespace std;

void reverse(char* s,int len){
        if(len == 0)
            return ;
        reverse(s+1,len-1);
        cout<< s[0];
        
}
void Solve(){
    string s;cin>>s;
    reverse(&s[0],s.length());

}
 
int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}