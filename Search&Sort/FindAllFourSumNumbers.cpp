#include<bits/stdc++.h>
using namespace std;

 vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        set<vector<int>> ans;
        for(int i=0;i<=(n-3);i++){
            for(int j=i+1;j<=(n-2);j++){
                int sum = arr[i]+arr[j];
                int l=j+1,r=n-1;
                while(l<r){
                    if(sum+arr[l]+arr[r]==k){
                        ans.insert({arr[i],arr[j],arr[l],arr[r]});
                        l++;
                        r--;
                    }
                    else if(sum+arr[l]+arr[r]>k)r--;
                    else l++;
                }
            }
        }
        vector<vector<int>>v;
        for(auto it=ans.begin();it!=ans.end();it++)
            v.push_back(*it);
        return v;
    }

void Solve(){
    int n,k;cin>>n>>k;
    vector<int> v_(n);
    for(auto &i:v_)cin>>i;
    vector<vector<int>> v = fourSum(v_,k);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<4;j++)
            cout<<v[i][j]<<" ";
        cout<<"\n";
    }
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}