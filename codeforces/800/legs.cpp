#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    while(n--){
        cin>>m;
        int k=m%4;
        int i=k/2;
        cout<<(m/4+i)<<endl;
    }
}