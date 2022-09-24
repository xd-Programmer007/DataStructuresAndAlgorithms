#include<bits/stdc++.h>
using namespace std;

class Solution{
	
	
	public:
	long long countTriplets(long long a[], int n, long long sum_)
	{
	    // Your code goes here
	    sort(a,a+n);
	    int count=0;
	    for(int i=0;i<n-2;i++){
	        int p1 = i,p2 = i+1,p3=n-1;
	        while(p2<p3){
	            long long int sum = a[p1]+a[p2]+a[p3];
	            if(sum<sum_)
	                count+= (p3-p2),p2++;
	            else
	                p3--;
	        }
	    }
	    return count;
	}
		 

};

void Solve(){
        int n;cin>>n;
        long long int k;cin>>k;
        long long int v[n];
        for(int i=0;i<n;i++)
            cin>>v[i];
        Solution Obj;
        int count= Obj.countTriplets(v,n,k);

}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}