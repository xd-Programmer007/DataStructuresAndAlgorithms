#include<bits/stdc++.h>
using namespace std;
int minJumps(int arr[], int n){
        if(n==1)
            return 0;
        if(arr[0]==0)
            return -1;
        int jump = 1;
        int maxReach = arr[0];
        int steps = arr[0];
        for(int i=1;i<n;i++){
            //if last element then return jump
            if(i==n-1)
                return jump;
            //update the max possible reach ate each step but apply max
            maxReach = max(maxReach,arr[i]+i);
            //each iteration decreases step
            steps--;
            //if steps become zero add jump and update steps with the maxReachable index-current 
            // index
            if(steps ==0){
                jump++;
                //if current index is greater than the max possible then jump not possible
                if(i>=maxReach)
                    return -1;
                steps= maxReach -i;
            }
        }
    return -1;
    }

void Solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<minJumps(a,n)<<endl ;
}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}