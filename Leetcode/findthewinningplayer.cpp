#include <bits/stdc++.h>
using namespace std;

int minLength(string s) {
    int n = s.length();
    int minLen = n;
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            minLen = min(minLen, n - count);
            count = 1;
        }
    }

    // Check for the last group of consecutive characters
    minLen = min(minLen, n - count);

    return minLen;
}

int main() {
    string s = "abaacbcbb";
    int result = minLength(s);
    cout << "Minimum length: " << result << endl;

    return 0;
}