#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if (a[1] == '+') {
            x += 1;
        } else {
            x -= 1;
        }
    }
    cout << x <<endl;
    return 0;
}