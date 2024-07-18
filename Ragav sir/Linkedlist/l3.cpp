#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        long long ans = 0;
        for(int i = 1; i <= x; i++){
            ans += (1LL << (i-1));
        }
        cout << ans << "\n";
    }
    return 0;
}