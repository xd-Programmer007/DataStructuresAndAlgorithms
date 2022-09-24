#include<bits/stdc++.h>
using namespace std;

int ternarySearch(int a[],int l,int r,int key){
    if(r>=l){
        int mid1 = l + (r-l)/3;
        int mid2 = r - (r-l)/3;

        if(a[mid1] == key)
            return mid1;
        if(a[mid2] == key)
            return mid2;
        if(key < a[mid1])
            return ternarySearch(a,l,mid1-1,key);
        else if(key>a[mid2])
            return ternarySearch(a,mid2+1,r,key);
        return ternarySearch(a,mid1+1,mid2-1,key);
    }
    return -1;
}
void Solve(){
    int n,key;cin>>n>>key;
    int a[n];for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cout<<ternarySearch(a,0,n-1,key)<<endl;
}
 
int main(){
int t;
cin>>t;
while(t--);
Solve();
return 0;
}