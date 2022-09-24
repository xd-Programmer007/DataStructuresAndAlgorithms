#include<bits/stdc++.h>
using namespace std;

class Solution 
{
   public:
   //Function to find the minimum number of swaps required to sort the array. 
    int minSwaps(vector<int>&nums)
    {
        // Code here
        int count = 0;
        map<int , int>mp;
        for (int i=0; i<nums.size(); i++){
            mp[nums[i]] = i;
        }
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i++){
            while(mp[nums[i]] != i){
                count++;
                swap(nums[i], nums[mp[nums[i]]]);
            }
        }return count;
    }
};

void Solve(){
    int n;cin>>n;
    vector<int> nums(n);
    for(auto &i:nums)
        cin>>i;
    Solution Obj;
    int count =    Obj.minSwaps(nums);
    cout<<count<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}