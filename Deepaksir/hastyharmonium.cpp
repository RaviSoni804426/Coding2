#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string t = string(1, s[0]);
    for (int i = 1; i < s.size(); i++) {
        if (s[i] < t.back()) {
            t += s[i];
        }
    }

    cout << t << endl;

    return 0;
}