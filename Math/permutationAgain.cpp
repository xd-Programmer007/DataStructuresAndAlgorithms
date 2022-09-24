//here  we find the maximum sum from absolute of difference between adjacent elements of a permutation from all possible permutations of n[1..n]

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n==1)
            cout<<1<<endl;
        else{
            if(n%2==0)
                cout<<((ll) n*n -2)/2<<endl;
            else
                cout<<((ll) n*n -3)/2<<endl;
        }
    }
    return 0;
}

