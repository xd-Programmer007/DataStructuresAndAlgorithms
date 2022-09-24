// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        bool isCorrect(int N,int trailing_zeros){
            int cnt = 0;
            while(N >0)
            {
                if(cnt >= trailing_zeros)
                    return true;
                cnt += N/5;
                N/=5;
            }
            return false;
        }
        
        int findNum(int n)
        {
        //complete the function here
            int l = 5,r = n*5;
            int ans = 5*n;
            while(l<=r){
                int m = l +(r-l)/2;
                if(isCorrect(m,n))
                    ans = m,r= m-1;
                else
                    l = m+1;
            }
            return ans;
        }
};



int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
} 