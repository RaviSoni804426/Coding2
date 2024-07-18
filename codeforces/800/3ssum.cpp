#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, i;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int sum=0;
        for(i=0;i<n;i++){
            sum+=a[i];
            if(sum>=n){
                cout<<i+1<<endl;
                break;
            }
        }
        cout<<sum<<endl;
    }   
};