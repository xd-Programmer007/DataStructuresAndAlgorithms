#include<bits/stdc++.h>
using namespace std;
 
int Solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1 ){
        return 1;
    }
    //the count of max _element
        //This means atleat one pos integer exists in array
    sort(a.begin(),a.end());
    long long sum =0;
    for(auto i:a)
        sum+=i;
    long long cnt =0,sum_=0;
    for(long long i=n-1;i>=0;i--){
        if(sum_ <=sum){
            sum_ += a[i];
            sum -=a[i];
            cnt++;
        }
        else
            break;
    }
    return cnt;
}
 
int main(){
int t=1;
cin>>t;
while(t--){
int ans = Solve();
cout<<ans<<endl;
}
return 0;
}