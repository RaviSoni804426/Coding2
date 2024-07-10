#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
   int n, k; cin >> n >> k; vector<long long> a(n); for (auto &i : a) cin >> i; cout << bsearch(a, 0, n - 1, k)