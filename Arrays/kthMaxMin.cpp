#include<bits/stdc++.h>
using namespace std;
 
void Solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    priority_queue<int> max_heap;

    // Creates a min heap
    priority_queue <int, vector<int>, greater<int> > min_heap;
    for(auto i:v)
        max_heap.push(i),min_heap.push(i);
    for(int i=0;i<k-1;i++){
        max_heap.pop();
        min_heap.pop();
    }
    cout<<"The Kth Maximum element is "<<max_heap.top()<<endl;
    cout<<"The kth Minimum element is "<<min_heap.top()<<endl;

}
 
int main(){
int t=1;
cin>>t;
while(t--);
Solve();
return 0;
}