#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;
cin >> t;
while(t--){
ll n,c=0;
cin >> n;
ll a[n+1];
for(int i=1;i<=n;i++){
    cin >> a[i];}
for(ll i=1;i<=n;i++){
    for(ll j=a[i]-i;j<n+1;j+=a[i]){
        if(j<=i) continue;
        else if(i+j==a[i]*a[j]) c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
 