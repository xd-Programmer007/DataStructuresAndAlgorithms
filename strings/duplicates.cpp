#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    string s;cin>>s;
    int a[26]={0};
    for(int i=0;i<s.length();i++)
        a[s[i] - 'a']++;
    for(int i=0;i<26;i++)
        if(a[i]>1)
            cout<<(char) (i+97)<<endl;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}