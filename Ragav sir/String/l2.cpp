#include<bits/stdc++.h>
#include<unordered_set>
using namesapce std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for(int ele : s){
        cout<<ele<<" ";
    }

}