#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    string W;
    cin>>W;
    W = W.substr(0, W.size() - 2) + "i";
    cout << W << endl;
}
return 0;
}
