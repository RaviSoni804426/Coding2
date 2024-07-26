#include <bits/stdc++.h>
using namespace std;
void reduceGrid(int n, int k, const vector<vector<char>>& grid) {
    int newSize = n / k;
    vector<vector<char>> reducedGrid(newSize, vector<char>(newSize));
    for (int i = 0; i < newSize; ++i) {
        for (int j = 0; j < newSize; ++j) {
            reducedGrid[i][j] = grid[i * k][j * k];
        }
    }
    for (int i = 0; i < newSize; ++i) {
        for (int j = 0; j < newSize; ++j) {
            cout << reducedGrid[i][j];
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<char>> grid(n, vector<char>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }
        reduceGrid(n, k, grid);
    }

    return 0;
}
