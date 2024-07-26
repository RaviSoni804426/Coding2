#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + c[i - 1];
    }
    vector<long long> suffix(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + c[n - 1] - c[i];
    }
    while (q--) {
        string type;
        int k;
        cin >> type >> k;
        if (type == "ADD") {
            vector<int>::iterator it = lower_bound(c.begin(), c.end(), k);
            int idx = it - checkpoints.begin();
            n++;
            checkpoints.insert(it, k);
            prefix.insert(prefix.begin() + idx, prefix[idx] + k);
            suffix.insert(suffix.begin() + idx, suffix[idx] - k);
            for (int i = idx + 1; i <= n; i++) {
                prefix[i] += i * k;
                suffix[i] += (n - i) * k;
            }
        } else {
            vector<int>::iterator it = lower_bound(checkpoints.begin(), checkpoints.end(), k);
            if (it != checkpoints.end() && *it == k) {
                int idx = it - checkpoints.begin();
                n--;
                checkpoints.erase(it);
                prefix.erase(prefix.begin() + idx);
                suffix.erase(suffix.begin() + idx);
                for (int i = idx; i < n; i++) {
                    prefix[i] -= k;
                    suffix[i] -= k;
                }
            }
        }
        long long ans = min(prefix[n], suffix[0]);
        for (int i = 1; i < n; i++) {
            ans = min(ans, prefix[i] + suffix[i]);
        }
        cout << ans << endl;
    }
    return 0;
}