#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;

    long long maxi=v[0],mini=v[0],max_so_far=v[0];
    for(int i=1;i<n;i++){
        long long k = v[i];
        long long temp = max({k,maxi*k,mini*k});
        mini = min({k,maxi*k,mini*k});
        maxi =temp;
        max_so_far= max(max_so_far,maxi);
    }
    cout<<max_so_far<<endl;
    
    
}

int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}
// int n;cin>>n;
//     vector<int> arr(n);
//     for(auto &i:arr)cin>>i;
 
// 	// max positive product
// 	// ending at the current position
// 	int max_ending_here = arr[0];

// 	// min negative product ending
// 	// at the current position
// 	int min_ending_here = arr[0];

// 	// Initialize overall max product
// 	int max_so_far = arr[0];
// 	/* Traverse through the array.
// 	the maximum product subarray ending at an index
// 	will be the maximum of the element itself,
// 	the product of element and max product ending previously
// 	and the min product ending previously. */
// 	for (int i = 1; i < n; i++)
// 	{
// 		int temp = max({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
// 		min_ending_here = min({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
// 		max_ending_here = temp;
// 		max_so_far = max(max_so_far, max_ending_here);
// 	}
// 	cout<<max_so_far<<endl;