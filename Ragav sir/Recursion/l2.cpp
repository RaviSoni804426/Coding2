#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        int r = num % 3;
        if (r == 1) {
            count++;
        } else if (r == 2) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = minOperations(nums);
    cout << "Minimum number of operations: " << result << endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    int operations = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            count++;
        } else {
            count = 0;
        }

        if (count >= 3) {
            operations++;
            count = 0;
        }
    }

    if (count >= 3) {
        operations++;
    }

    if (count > 0) {
        return -1;
    }

    return operations;
}

int main() {
    vector<int> nums = {0, 0, 0, 1, 0, 1, 1, 0};
    int result = minOperations(nums);
    cout << "Minimum number of operations: " << result << endl;
if u want to be best person of u then u have to be like this:so u can do anything of this is best for u:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            count++;
        }else{
            count=0;
        }
        if(count>=3){
            cout<<"Minimum number of operations: "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Minimum number of operations: "<<n<<endl;
    return 0;
}
