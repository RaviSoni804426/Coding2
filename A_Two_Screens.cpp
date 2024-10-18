#include<bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define MOD 1000000007
 
void solve(){
    string str1, str2; cin >> str1 >> str2;
    int l1 = str1.size(), l2 = str2.size(), limit = 0;
    for (int i = 0; i < min(l1, l2); i++){
        if (str1[i] != str2[i]){break;}
        limit++;
    }
    cout << min(l1 + l2, l1 + l2 + 1 - limit) << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin >> tests;
    while (tests--){
        solve();
    }
}