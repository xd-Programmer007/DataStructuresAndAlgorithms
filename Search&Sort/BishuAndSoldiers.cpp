/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll getScore(vector<ll> v,ll power){
	int n = v.size();
	ll left =0;
	ll right = n-1;
	ll ans =-1;
	while(left<=right){
		ll mid= (right+left)/2;
		if(v[mid]>power)
			right = mid -1;
		else{
			ans = mid;
			left = mid+1;
		}
	}
	return ans+1;
}

int main(){
	ll n;cin>>n;
	vector<ll> v(n),sum(n);
	for(auto &i:v)cin>>i;
	sort(v.begin(),v.end());
	sum[0]=v[0];
	for(int i=1;i<n;i++){
		sum[i] = sum[i-1]+v[i];
	}
	int q;cin>>q;
	while(q--){
		ll power;cin>>power;
		ll res = getScore(v,power);
		cout<<res<<" "<<sum[res-1]<<endl;
	}
	return 0;
}