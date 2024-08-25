#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=1;i<n;i++){
            if(s[i-1]==s[n-1]){
                cout<<"No"<<endl;}
            else {
                cout<<"Yes"<<endl;

            }
        }
    }
}