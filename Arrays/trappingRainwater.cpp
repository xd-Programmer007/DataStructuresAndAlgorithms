#include<bits/stdc++.h>
using namespace std;
 
int findwater(int arr[],int n){
    int result = 0;
    int left_max = 0,right_max =0;
    int lo = 0,hi=n-1;

    while(lo<=hi){
        if(arr[lo]<arr[hi]){
            if(arr[lo]>left_max)
                left_max = arr[lo];
            else
                result += left_max - arr[lo];
            lo++;
        }
        else{
            if(arr[hi]>right_max)
                right_max = arr[hi];
            else    
                result += right_max - arr[hi];
            hi--;
        }
    }
    return result;
}

void Solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int water = findwater(a,n);
    cout<<water<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}