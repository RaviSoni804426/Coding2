#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    string arr[n];
    string concat = s + s;

    for (int i = 0; i < n; i++)
        arr[i] = concat.substr(i, n);
    
    sort(arr, arr + n);

    cout << arr[0] << endl;
    return 0;
}
