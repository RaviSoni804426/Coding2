//   Next Greater Element question
#include<bits/stdc++.h>
using namespace std;
int main(){
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> m;
        vector<int> ans;

        
        for (int num : nums2) {
            while (!s.empty() && s.top() < num) {
                m[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }
        
        
        while (!s.empty()) {
            m[s.top()] = -1;
            s.pop();
        }

        
        for (int num : nums1) {
            ans.push_back(m[num]);
        }

        return ans;
    } 
    }
};