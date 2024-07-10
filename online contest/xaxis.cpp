// #include<bits/stdc++.h>

// using namespace std;

// int f(int a, int x1, int x2, int x3) {
//     return abs(a - x1) + abs(a - x2) + abs(a - x3);
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int x1, x2, x3;
//         cin >> x1 >> x2 >> x3;

//         int min_distance = INT_MAX;
        
//         // Check all possible values for 'a' from 1 to 10
//         for (int a = 1; a <= 10; ++a) {
//             int current_distance = f(a, x1, x2, x3);
//             if (current_distance < min_distance) {
//                 min_distance = current_distance;
//             }
//         }

//         cout << min_distance << endl;
//     }

//     return 0;
// }




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string s;
        cin >> s;
        
        vector<int> indices(m);
        for (int i = 0; i < m; ++i) {
            cin >> indices[i];
            --indices[i]; // Convert to 0-based index
        }
        
        string c;
        cin >> c;
        
        // Create a vector of pairs to store indices and their corresponding characters
        vector<pair<int, char>> updates(m);
        for (int i = 0; i < m; ++i) {
            updates[i] = {indices[i], c[i]};
        }
        
        // Sort the updates by character first and then by index
        sort(updates.begin(), updates.end(), [](const pair<int, char> &a, const pair<int, char> &b) {
            return a.second < b.second;
        });
        
        // Apply the updates in the sorted order
        for (int i = 0; i < m; ++i) {
            s[updates[i].first] = updates[i].second;
        }
        
        // Output the modified string
        cout << s << endl;
    }
    
    return 0;
}
