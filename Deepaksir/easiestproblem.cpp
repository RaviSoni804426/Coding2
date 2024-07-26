#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int answer = n + 1;
    while (answer % k != 0) {
        answer++;
    }
    
    cout << answer << endl;
    return 0;
}

