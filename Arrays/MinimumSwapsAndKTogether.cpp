#include<bits/stdc++.h>
using namespace std;

int minSwap(int arr[], int n, int k) {
    int w = 0, h = 0;
    for (int i = 0; i < n; i++) if (arr[i] <= k) w++;
    for (int i = 0; i < w; i++) if (arr[i] > k) h++;
    int min_h = h;
    for (int i = 0; i + w < n; i++) {
        if (arr[i] > k) h--;
        if (arr[i + w] > k) h++;
        min_h = min(min_h, h);
    }
    return min_h;
}

void Solve(){
        int n,k;cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int count =minSwap(a,n,k);

        cout<<count<<endl;

}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}