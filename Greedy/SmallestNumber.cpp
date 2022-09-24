// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
        // code here 
        if(9*D<S)
            return "-1";
            
        vector<int> v(D,0);
        for(int i=0;i<D;i++){
            //have to save at least 1 till end
            if(i<D-1){
                
                if(S>9){
                    v[i]=9;
                    S-=9;
                }
                else if(S>1){
                    S-=1;
                    v[i]=S;
                    S=1;
                    }
                }
            else{
                v[i]=S;
                
            }
        }
        reverse(v.begin(),v.end());
        string s;
        for(auto i:v){
            int k = i;
            s+= to_string(k);
        }
        return s;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends