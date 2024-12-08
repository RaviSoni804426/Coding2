#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }
        int ans = INT_MIN;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            for (int j = a[i]; j < b[i]; j++) {  
                m[j]++;
                ans = max(ans, m[j]); 
            }
        }
        cout << ans << endl;
    }
    return 0;
}
