#include<bits/stdc++.h>
using namespace std;
 
stack<int> insertAtBottom(stack<int> s,int i){
    if(s.empty()){
        s.push(i);
        return s;
    }
    int a = s.top();
    s.pop();
    stack<int> new_stack = insertAtBottom(s,i);
    new_stack.push(a);
    return new_stack;
}
 
int main(){
    int a[4] ={1,2,3,4};
    int k =5;
    stack<int> s;
    for(int i=0;i<4;i++)
        s.push(a[i]);
    stack<int> new_stack = insertAtBottom(s,k);
    while(!new_stack.empty()){
        cout<<new_stack.top()<<" ";
        new_stack.pop();
    }

return 0;
}