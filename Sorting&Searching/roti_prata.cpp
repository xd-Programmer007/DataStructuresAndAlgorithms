#include <bits/stdc++.h>
using namespace std;

bool check2(int n,int c){
	return (n*n + n -c) <=0;
}
bool check(int a[],int n,int reqP,int mid){
	int cnt =0;
	for(int i=0;i<n;i++){
		//mid is the maximum available time
		int lb = 0,ub =reqP,ans =0;
        int max_cnt_pars = (2*mid)/a[i];
		while(lb<=ub ){
			int m = (lb+ub)/2;
			if(check2(m,max_cnt_pars)){
				lb = m+1;
				ans = m;
			}
			else 
				ub = m-1;
		}
		cnt+= ans;
        if(cnt >= reqP)return true;
	}
	return false;
}

int main() {
	int t;cin>>t;
	while(t--){
		int parathas;cin>>parathas;
		
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		
		int lb = 0,ub = 1e8,ans = 0;
		while(lb <= ub ){
			int m = (lb+ub)/2;
			if(check(a,n,parathas,m)){
				ans = m;
				ub = m-1;
			}
			else
				lb = m+1;
		}
        cout<<ans<<endl;
		
	}
	return 0;
}