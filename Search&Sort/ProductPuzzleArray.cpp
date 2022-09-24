#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> ans(n);
        if(n==1){
            ans[0] =1;
            return ans;
        }
        vector<long long int> v(n,0);
        v[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            v[i] = nums[i]*v[i+1];
        }
        long long int prod =1;
        for(int i=0;i<n;i++){
            if(i!=n-1)
                ans[i] = prod*v[i+1];
            else
                ans[i]= prod;
            prod *= nums[i];
        }
        return ans;
    }
};

void Solve(){
    int n;cin>>n;
    vector<long long int> v(n);
    for(auto &i:v)cin>>i;
    Solution Obj;
    vector<long long int> ans = Obj.productExceptSelf(v,n);
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}