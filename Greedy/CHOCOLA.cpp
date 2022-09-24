#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int m,n;cin>>m>>n;
    vector<int> x(m-1),y(n-1);
    for(auto &i:x)cin>>i;
    for(auto &i:y)cin>>i;
    int x_cuts =0,y_cuts =0;
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    int i=x.size()-1,j=y.size()-1;
    int cost= 0;
    while(i>=0 && j>=0){
        if(x[i]>y[j]){
            cost += x[i]*(x_cuts+1);
            y_cuts++;
            i--;
        }
        else{
            cost+=y[j]*(y_cuts+1);
            x_cuts++;
            j--;
        }
    }
    while(i>=0){
            cost += x[i]*(x_cuts+1);
            y_cuts++;
            i--;
    }
    while(j>=0){
            cost+=y[j]*(y_cuts+1);
            x_cuts++;
            j--;
    }
    cout<<cost<<endl;
}
 
int main(){
int t;
cin>>t;
getwchar();
while(t--)
Solve();
return 0;
}