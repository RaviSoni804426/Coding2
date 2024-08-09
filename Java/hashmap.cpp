#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    int target=10;
    if(s.find(target)!=s.end()){
        cout<<target<<" is present in the set."<<endl;
    }
    else{
        cout<<target<<" is not present in the set."<<endl;
    }
    
    
}