// // #include <bits/stdc++.h>
// // using namespace std;
// // int main() {
// //     int a, b;
// //     cin >> a >> b;
// //      if (a <= b) {
// //         cout<< "Tyro";
// //     } else {
// //         cout<<"Dom";
// //     }


// //     return 0;
// // }


// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// int findEvenSumSubarray(const vector<int>& arr) {
//     int n = arr.size();
//     int maxLength = 0;
//     unordered_map<int, int> prefixSumCount;
//     prefixSumCount[0] = 1;

//     int prefixSum = 0;
//     for (int i = 0; i < n; i++) {
//         prefixSum += arr[i];

//         if (prefixSumCount.count(prefixSum)) {
//             maxLength = max(maxLength, i - prefixSumCount[prefixSum] + 1);
//         } else {
//             prefixSumCount[prefixSum] = i + 1;
//         }
//     }

//     return maxLength;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         int maxLength = findEvenSumSubarray(arr);
//         cout << maxLength << endl;
//     }

//     return 0;
// }


