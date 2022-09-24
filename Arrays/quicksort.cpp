#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int start,int end){
    int pivot =a[start];
    int count = 0;
    for(int i=start+1;i<=end;i++){
        if(a[i]<=pivot)
            count++;
    }
    int pivotIndex = start+count;
    swap(a[start],a[pivotIndex]);
    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(a[i]<=pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<pivotIndex && j>pivotIndex)
            swap(a[i++],a[j--]);
    }
    return pivotIndex;
}

void quickSort(int a[],int l,int r){
    if(l>=r)
        return;
    int p = partition(a,l,r);
    quickSort(a,l,p-1);
    quickSort(a,p+1,r);
}

void Solve(){
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++)cin>>a[i];
    quickSort(a,0,n-1);
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