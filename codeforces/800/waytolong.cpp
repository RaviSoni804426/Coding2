#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        a=s.length();
        if(a<11){
            cout<<s<<endl;}
        else{
            cout<<s[0]<<(a-2)<<s[a-1]<<endl;}
        
    }
}