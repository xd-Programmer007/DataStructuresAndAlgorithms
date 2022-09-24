#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0;
        int mn= INT_MAX;
        while(j<nums.size()){
            sum+=nums[j];
            if(sum<target)
                j++;
            else if(sum>=target){
                while(sum>=target){
                    sum-=nums[i];
                    mn = min(j-i+1,mn);
                    i++;
                }
                j++;
            }
        }
        if(mn==INT_MAX)return 0;
        return mn;
    }
};

void Solve(){
    int n,target;cin>>n>>target;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    Solution obj;
    cout<<obj.minSubArrayLen(target,v)<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}