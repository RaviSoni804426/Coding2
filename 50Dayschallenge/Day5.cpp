//Logest Common Prefix

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        sort(strs.begin(),strs.end());
        string first=strs[0],last=strs[n-1];
        for(int i=0;i<min(first.length(),last.length());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            else{
                ans+=first[i];}
            }
        return ans;
        }

};