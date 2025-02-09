#include <bits/stdc++.h>
using namespace std;

int minLength(string s) {
    int n = s.length();
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            s.erase(i, 1);
            n--;
            i = -1;
        }
    }
    return s.length();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minLength(s) << endl;
    }
    return 0;
}
