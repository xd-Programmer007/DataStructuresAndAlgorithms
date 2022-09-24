#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    string s;cin>>s;
    int i=0,j=s.length()-1;
    bool flag =true;
    while(i<=j){
        if(s[i]!=s[j]){
            flag = false;
            break;
        }
        i++,j--;
    }
    if(flag)
        cout<<"Yes this string is a palindrome"<<endl;
    else
        cout<<"No this string is not a palindrome"<<endl;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}