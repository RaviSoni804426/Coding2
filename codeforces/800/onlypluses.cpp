#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int max_val = max(a, max(b, c));
        int total = a * b * c;
        for (int i = 0; i < 5; i++) {
            int temp = total;
            for (int j = 0; j < 3; j++) {
                if (j == 0) temp = max(temp, (a + 1) * b * c);
                if (j == 1) temp = max(temp, a * (b + 1) * c);
                if (j == 2) temp = max(temp, a * b * (c + 1));
            }
            total = temp;
            if (total == max_val * max_val * max_val) break;
        }
        cout << total << endl;
    }
    return 0;
}