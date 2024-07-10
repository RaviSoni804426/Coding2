# t=map(int,input().split())
# sum=0
# for i in t:
#     if i%2==1:
#         sum+=i


def sum_array(arr):
    total = 0
    for num in arr:
        total += num
        if total < 0:
            total = sum(arr)
            break
    return total

n = int(input())
arr = list(map(int, input().split()))
print(sum_array(arr))


include <iostream>
include <vector>
using namespace std;

int sum_array(vector<int>& arr) {
    int total = 0;
    for (int num : arr) {
        total += num;
        if (total < 0) {
            total = 0;
            for (int num : arr) {
                total += num;
            }
            break;
        }
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sum_array(arr) << endl;
    return 0;
}