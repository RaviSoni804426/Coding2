#include <bits/stdc++.h>
using namespace std;
 
string s;
map <char, bool> vo;
 
int main(){
    cin >> s;
    vo['a'] = vo['e'] = vo['i'] = vo['u'] = vo['y'] = vo['o'] = 1;
    
    for (int i = 0; i < s.size(); i ++){
        char c = tolower(s[i]);
        if (!vo.count(c)) cout << '.' << c;
    }
    
    return 0;
}