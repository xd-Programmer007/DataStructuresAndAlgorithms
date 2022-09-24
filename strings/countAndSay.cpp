#include<bits/stdc++.h>
using namespace std;
 
<<<<<<< Updated upstream

=======
void Solve(){
    map<int,int> m;
    vector<char> s{'2','1'};
    int n;
    cin>>n;
    while(n--){
        for(int i=0;i<s.size();i++){
            m[s[i]-'0']++;
        }
        vector<char> t(s.begin(),s.end());
        s.clear()  ;      
        for(int i=0;i<t.size()-1;i++){
            if(t[i]!=t[i+1]){
                char a = m[t[i]-'0'];
                string k = to_string(a + t[i]);
                s.insert(s.end(),k.begin(),k.end());
            }
        }
        m.clear();
        }
    for(auto i:s)
        cout<<i;
    cout<<endl;
>>>>>>> Stashed changes
}
 
int main(){
int t=1;
<<<<<<< Updated upstream
=======
// cin>>t;
>>>>>>> Stashed changes
while(t--);
Solve();
return 0;
}