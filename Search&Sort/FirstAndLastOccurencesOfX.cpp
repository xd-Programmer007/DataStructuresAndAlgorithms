#include<bits/stdc++.h>
using namespace std;
 
 vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans(2,-1);
    if(binary_search(arr,arr+n,x)){
        int index1 = lower_bound(arr,arr+n,x)-arr;
        int index2 = lower_bound(arr,arr+n,x+1)-arr;
        ans[0]=index1,ans[1]=index2 -1;
    }
    return ans;
}

void Solve(){
    int n,x;cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> ans = find(arr,n,x);
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