

#include <bits/stdc++.h>
using namespace std;
 
const int N = 50 + 10;
int t, n, a[N];
 
int main() {
   cin >> t;
   
   while (t--) {
       cin >> n;
       for (int i = 0; i < n; i++) cin >> a[i];
       
       sort(a, a + n);
       
       bool flag = true;
       for (int i = 0; i < n - 1; i++) flag &= (a[i + 1] <= a[i] + 1);
       
       cout << (flag? "YES" : "NO") << '\n';
   }
}