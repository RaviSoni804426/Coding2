#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<double> p(n), a(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<double> prob(n, 0);
    double total = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= m) {
            total += p[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] >= m) {
            prob[i] = p[i] / total;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(9) << prob[i] << " ";
    }
    cout << endl;
    return 0;
}
