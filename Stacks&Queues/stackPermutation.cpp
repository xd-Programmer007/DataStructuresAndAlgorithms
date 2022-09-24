#include<bits/stdc++.h>
using namespace std;
 

bool checkStackPermutation(int ip[],int op[],int n)
{
    queue<int> input;
    for(int i=0;i<n;i++){
        input.push(ip[i]);
    }
    queue<int> output;
    for(int i=0;i<n;i++){
        output.push(op[i]);
    }
    stack<int> tempStack;
    while(!input.empty()){
        int ele= input.front();
        input.pop();
        if(ele == output.front()){
            output.pop();
            while(!tempStack.empty()){
                if(tempStack.top()==output.front()){
                    tempStack.pop();
                    output.pop();
                }
                else
                    break;
            }
        }
        else 
            tempStack.push(ele);
    }
    return (input.empty()&& tempStack.empty());
}
int main(){
    int n =5;
    int in[n]={1,2,3,4,5};
    int op[n]={3,2,4,1,5};
    bool f = checkStackPermutation(in,op,n);
    if(f)
        cout<<"Output is a permutation of the input"<<endl;
    else    
        cout<<"Output is not the permutation of the input"<<endl;
}