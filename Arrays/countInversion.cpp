#include<bits/stdc++.h>
using namespace std;


class Solution{
    long long int inv_count=0;
    public:
    long long int inversionCount(long long int* a,long long int n){
        mergeSort(a,0,n-1);
        return inv_count;
    }
    void  merge(long long int *array,long long int l,long long int m,long long int r){
    long long int i,j,k,nl,nr,t=0;
    nl = m-l+1;nr=r-m;
    long long int larr[nl],rarr[nr];
    for(i=0;i<nl;i++){
        larr[i] = array[l+i];
    }
    for(j=0;j<nr;j++){
        rarr[j]=array[m+1+j];
    }
    i=0;j=0;k=l;
    //merge temp arrays to real array
    while(i<nl && j<nr){
        if(larr[i]<= rarr[j]){
            array[k++] = larr[i++];
        }
        else{
            array[k++]=rarr[j++];
            inv_count += nl - i;
        }
    }
    while(i<nl){
        array[k]=larr[i];
        i++,k++;
        t++;
    }
    while(j<nr){
        array[k]=rarr[j];
        j++,k++;
    }
}
    void mergeSort(long long int* a,long long int l,long long int r){
        
        if(l<r){
            long long int m = l+(r-l)/2;
            mergeSort(a,l,m);
            mergeSort(a,m+1,r);
            merge(a,l,m,r);
        }
    }
};

void Solve(){
    long long int n;cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
        cin>>a[i];
        Solution obj;
        cout<<obj.inversionCount(a,n)<<endl;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}