#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void merge(int a[],int l,int m,int h){
        int n1 = m - l+1;
        int n2 = h - m;
        int left[n1],right[n2];
        for(int i=0;i<n1;i++)
            left[i] = a[l+i];
        for(int i=0;i<n2;i++)
            right[i]=a[m+i+1];
        
        int k=l;
        int i=0;
        int j=0;
        
        while(i<n1 && j<n2){
            if(__builtin_popcount(left[i])<__builtin_popcount(right[j]))
                a[k++] = right[j++];
            else
                a[k++] = left[i++];
        }
        while(i<n1)
            a[k++] = left[i++];
        while(j<n2)
            a[k++] = right[j++];
    }
    void mergeSort(int a[],int l,int h){
        if(l<h){
            int m = l +(h-l)/2;
            mergeSort(a,l,m);
            mergeSort(a,m+1,h);
            merge(a,l,m,h);
        }
    }
    

    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        mergeSort(arr,0,n-1);
    }
};

void Solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    Solution Obj;
    Obj.sortBySetBitCount(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}