#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n > 0) {
        int a;
        cin >> a;
        cout << a / 2 + 1 << '\n';
        n--;
    }
    return 0;
}