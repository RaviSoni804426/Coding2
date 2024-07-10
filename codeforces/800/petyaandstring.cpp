#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string x,y;
    int n,m;
    cin>> x>> y;
    n=x.length();
    for (int i=0; i<n; i++){
        x[i]=toupper(x[i]);
        y[i]=toupper(y[i]);
    }
    if(x==y) cout <<0;
    else if(x>y) cout << 1;
    else cout << -1;
 
    return 0;
}