// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &s1,vector<int> &s2,vector<int> &s3){
        int sum1=0,sum2=0,sum3=0,ans = 0;
        sum1 = accumulate(s1.begin(),s1.end(),0);
        sum2 =  accumulate(s2.begin(),s2.end(),0);
        sum3 = accumulate(s3.begin(),s3.end(),0);
        int i=0,j=0,k=0;
        while(i<N1 && j<N2 && k<N3){
            if(sum1==sum2 && sum2 == sum3){
                ans = max(ans,sum1);
                sum1-=s1[i++];
                sum2 -=s2[j++];
                sum3 -= s3[k++];
            }
            if(sum1>sum2){
                if(sum1>sum3){
                    sum1-=s1[i++];
                }
                else{
                    sum3-=s3[k++];
                }
            }
            else{
                if(sum2>sum3){
                    sum2-=s2[j++];
                }
                else
                    sum3-=s3[k++];
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}  // } Driver Code Ends