// You are a poor person in an island. There is only one shop in this island, this shop is open on all days of the week except for Sunday. Consider following constraints: 

// N – Maximum unit of food you can buy each day.
// S – Number of days you are required to survive.
// M – Unit of food required each day to survive.
// Currently, it’s Monday, and you need to survive for the next S days. 
// Find the minimum number of days on which you need to buy food from the shop so that you can survive the next S days, or determine that it isn’t possible to survive. 
#include<bits/stdc++.h>
using namespace std;
 

int main(){
    int n,s,m;cin>>n>>s>>m;
    if(m<=n){
        //this means he can survive 6 days before the sunday
        if(6*n >=7*m){
            int ans = ceil((s*m )/n) ;
            cout<<"YES"<<" "<<ans<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
   else
     cout<<"NO"<<endl;
    return 0;
}