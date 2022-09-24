#include <bits/stdc++.h>
using namespace std;

bool check2(int n,int c){
	return (n*n + n -c) <=0;
}
bool check(vector<int> a,int n,int reqP,int mid){
	int cnt =0;
	for(int i=0;i<n;i++){
		//mid is the maximum available time
		int lb = 0,ub =reqP,ans =0;
        int max_cnt_pars = (2*mid)/a[i];
		while(lb<=ub){
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
    cout<<cnt<<endl;
	return false;
}

int main() {
    int parathas;cin>>parathas;
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    check(v,n,parathas,10);
	return 0;
}