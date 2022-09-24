#include<bits/stdc++.h>
using namespace std;
 

 
int main(){
while(true){
    int n;cin>>n;
    if(n==0)
        break;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int m;cin>>m;
    vector<int> b(m);
    for(auto &i:b)cin>>i;
    //now we have to mark vector pairs where the two elements in vectors match
    int i=0,j=0,s1 = 0,s2 = 0,ans = 0;
    while(i<n && j<m){
        if(a[i]<b[j])s1 += a[i++];
        else if(a[i]>b[j])s2+= b[j++];
        else{
            ans += (max(s1,s2)+a[i]);
            s1 = 0,s2 =0;
            i++,j++;
        }
    }
    while(i<n)
        s1 += a[i++];
    while(j<m)
        s2 += b[j++];
    ans += max(s1,s2);
    cout<<ans<<endl;
	}
return 0;
}