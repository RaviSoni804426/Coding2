#include <bits/stdc++.h>
using namespace std;
int kthSmallest(vector<int> &arr, int k) {
    int l = *min_element(arr.begin(), arr.end()); // Find the minimum element
    int h = *max_element(arr.begin(), arr.end()); // Find the maximum element
    
    while (l <= h) {
        int m = l + (h - l) / 2; // Avoid potential overflow
        int count = 0;

        // Count elements smaller or equal to m
        for (int num : arr) {
            if (num <= m) count++;
        }

        if (count < k) {
            l = m + 1; // Move to the higher half
        } else {
            h = m - 1; // Move to the lower half
        }
    }

    return l; // The kth smallest element
}

