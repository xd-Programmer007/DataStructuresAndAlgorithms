// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        int n_e =0;
        for(int i=0;i<n;i++){
            if(a[i]<0)
                n_e++;
        }
        if(k>n_e){
            for(int i=0;i<n;i++){
                if(a[i]<0)
                    a[i]*=-1;
            }
            k =k-n_e;
            sort(a,a+n);
            int i=0;
            if(k%2!=0){
                a[0]*=-1;
            }
            long long sum=0;
            for(;i<n;i++)
                sum+=a[i];
            return sum;
        }
        else{
           for(int i=0;k&& i<n ;i++){
               if(a[i]<0){
                   a[i]*=-1;
                   k--;
               }
           } 
           long long sum =0;
           for(int i=0;i<n;i++){
                sum+=a[i];
           }
           return sum;
        }
    }
};

// { Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}  // } Driver Code Ends