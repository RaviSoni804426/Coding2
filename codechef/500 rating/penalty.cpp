#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int a = 5 - x, b = 5 - y;
        if (a <= 0 && b <= 0) {
            cout << "YES\n";
        } else if (a <= 0 || b <= 0) {
            cout << "NO\n";
        } else {
            if (a == b) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}