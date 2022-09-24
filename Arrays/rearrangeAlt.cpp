#include<bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
 
void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)
        cin>>i;
    int l=0,r=n-1;
    while(l<=r){
        while(v[l]<0)
            l++;
        while(v[r]>0)
            r--;
        if(r<=l)break;
        swap(v[l++],v[r--]);
    }
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
=======
class Solution{
public:

	void rearrange(int v[], int n) {
	    // code here
	    int l=0,r=n-1;
	    while(l<=r){
	        if(v[l]>0)
	            l++;
	       else
	        swap(v[l],v[r--]);
	    }
	    int index=0;
	    for(int i=0;i<n;i++){
	        if(v[i]<0){
	            index= i;
	            break;
	        }
	    }
    	int v_new[n],j=0;
    	for(int i=0;i<n;i++){
    	    if(i& 1){
    	        v_new[i] = v[index++];
    	    }
    	    else{
    	        v_new[i] = v[j++];
    	    }
    	}
        for(int i=0;i<n;i++)
            cout<<v_new[i]<<" ";
        cout<<endl;
	}
};

void Solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    Solution obj;
    obj.rearrange(arr,n);
>>>>>>> 153d3cd696b847e0c0fc31a81740ff28ebbb7710
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}