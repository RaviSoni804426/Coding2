#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    
    while (q--) {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 1; i <= n; ++i)
            dp[i][0] = i; 
        for (int j = 1; j <= m; ++j)
            dp[0][j] = j;
    
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
               
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
                }
            }
        }
        
        cout << dp[n][m] << endl;
    }

    return 0;
}
