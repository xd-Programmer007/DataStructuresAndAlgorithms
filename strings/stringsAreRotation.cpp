#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    string s1,s2;cin>>s1>>s2;
    //We have to check whether s1 is rotation of s2;
    s2 = s2+s2;
    bool flag = (s2.find(s1)==string::npos);
    if(!flag)
        cout<<"The strings are rotations of each other";
    else
        cout<<"The strings are not rotations of each other";
    cout<<endl;
}
 
int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}