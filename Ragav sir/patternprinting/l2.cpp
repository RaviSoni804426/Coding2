#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] >= k) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
int main(){
    
}