#include<bits/stdc++.h>
using namespace std;
 
int findLongestConseqSubseq(vector<int> v_)
    {
      //Your code here
      set<int> s(v_.begin(),v_.end());
      vector<int> v(s.begin(),s.end());
      int l =1,max_l=1;
      for(int i=0;i<v.size()-1;i++){
          if(v[i+1]-v[i]!=1){
              max_l = max(max_l,l);
              l =1;
            }
        else
            l++;
      }
      max_l = max(max_l,l);
      return max_l;
    }

void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    cout<<findLongestConseqSubseq(v)<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}