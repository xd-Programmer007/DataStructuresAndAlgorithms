#include<bits/stdc++.h>
using namespace std;

void Solve(){
    string s1,s2,result;cin>>s1>>s2>>result;
    int l1 =s1.length(),l2=s2.length(),l3= result.length();
    if(l1 + l2 == l3){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        sort(result.begin(),result.end());

        int i=0,j=0,k=0;
        bool flag =true;
        while( k< l3){
            if(i<l1 && s1[i]==result[k])
                i++;
            else if(j <l2 && s2[j] == result[k])
                j++;
            else 
                flag =false;
            k++;
        }
        if(flag)
            cout<<"The result string is a valid shuffle of s1 and s2";
        else
            cout<<"The result string is not a Valid shuffle of s1 and s2";
        cout<<endl;
    }
}
 
int main(){
int t=1;
// cin>>t;
while(t--);
Solve();
return 0;
}