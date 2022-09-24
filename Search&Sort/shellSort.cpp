#include<bits/stdc++.h>
using namespace std;

int shellSort(int a[],int n){
    for(int gap=n/2;gap>0;gap/=2){
        for(int i=gap;i<n;i++){
            int temp = a[i];
            int j;
            for(j = i;j>=gap && a[j-gap]>temp;j-=gap)
                a[j] = a[j-gap];
            a[j]=temp;
        }
    }
    return 0;
}
void Solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    shellSort(a,n);
    for(int i=0;i<n;i++)   
        cout<<a[i]<<" ";
    cout<<endl;
}
 
int main(){
    int t=1;
    // cin>>t;
    while(t--);
    Solve();
    return 0;
}