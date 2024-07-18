//Rotate Array
#include<bits/stdc++.h>
using namespace std;
void rotateArray(int arr[], int n, int k) {
    // If k is greater than or equal to n, reduce it to a valid value
    k = k % n;

    // Reverse the entire array
    reverse(arr, arr + n);

    // Reverse the first k elements
    reverse(arr, arr + k);

    // Reverse the remaining elements
    reverse(arr + k, arr + n);
}