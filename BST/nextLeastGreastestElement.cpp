#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

vector<int> nextGreaterIndex(vector<pair<int, int> >& temp)
{
    int n = temp.size();
    // initially result[i] for all i is -1
    vector<int> res(n, -1);
    stack<int> stack;
    for (int i = 0; i < n; i++) {
        if (stack.empty() || temp[i].s < stack.top())
            stack.push(
                temp[i].s);
        else {
            while (!stack.empty()
                   && temp[i].s > stack.top()) {
                res[stack.top()] = temp[i].s;
                stack.pop();
            }
            stack.push(temp[i].s);
        }
    }
    return res;
}
vector<pair<int,int>> makePairs(int a[],int n){
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        vp.push_back({a[i],i});
    }
    return vp;
}
int main()
{
    int n = 15;
    int arr[] = { 8,  58, 71, 18, 31, 32, 63, 92,
                  43, 3,  91, 93, 25, 80, 28 };
    vector<pair<int,int>>valueIndexPairs = makePairs(arr,n);
    sort(valueIndexPairs.begin(),valueIndexPairs.end());
    vector<int> indexes = nextGreaterIndex(valueIndexPairs);
    cout<<endl;
    vector<int> res ;
    for(int i=0;i<n;i++){
        if(indexes[i]!=-1)
            res.push_back(arr[indexes[valueIndexPairs[i].s]]);
        else   
            res.push_back(-1);
    }
    for(auto i:res)
        cout<<i<<" ";

    return 0;
}