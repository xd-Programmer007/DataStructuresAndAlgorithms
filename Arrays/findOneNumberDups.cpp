#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int> nums(n);
    for(auto &i:nums){
        cin>>i;
    }
        int tortoise = nums[0];
        int hare = nums[0];
        do{
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        }while(tortoise!=hare);
        
        tortoise = nums[0];
        while(tortoise!=hare){
            tortoise = nums[tortoise];
            hare = nums[hare];
        }
        cout<<hare<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}