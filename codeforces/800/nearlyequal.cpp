#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string a, b;
        cin>>a;
        cin>>b;
        int ans = INT_MAX;
        for(int i=0; i<=n-m; i++){
            int temp = 0;
            for(int j=0; j<m; j++){
                if(a[i+j] != b[j])
                    temp++;
            }
            ans = min(ans, temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}
