#include<bits/stdc++.h>
using namespace std;

int maxProductFunc(vector<int> v){
    bool zeros=false;
    int prod =1;
    for(auto i:v){
        if(i ==0){
            zeros = true;
            break;
        }
    }
    if(!zeros){
        int n_cnt = 0;
        for(auto i:v)
            if(i<0)
                n_cnt++;
        if(n_cnt%2==0){
            for(auto i:v)prod*=i;
            return prod;
        }
        else{
            int maxi=INT_MIN;
            for(auto i:v){
                if(i<0){
                    maxi = max(maxi,i);
                }
            }
            for(auto i:v){
                if(i!=maxi)
                    prod*=i;
            }
            return prod;
        }
    }
    else{
        for(auto i:v){
            if(i!=0)
                prod*=i;
        }
        return max(prod,0);
    }
}
void Solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int maxProduct = maxProductFunc(v);
    cout<<maxProduct<<endl;
}
 
int main(){
int t=1;
// cin>>t;
while(t--)
Solve();
return 0;
}