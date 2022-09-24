#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int ans = arr[n-1] - arr[0];
        int tempmin,tempmax;
        for(int i=0;i<n;i++){
            if(arr[i]-k<0)
                continue;
            tempmin = min(arr[0]+k,arr[i]-k);
            tempmax = max(arr[n-1]-k,arr[i-1]+k);
            ans = min(ans,tempmax-tempmin);
        }
        return ans;
    }
};

void Solve(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Solution obj;
    cout<<obj.getMinDiff(a,n,k)<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}