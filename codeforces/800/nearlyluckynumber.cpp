#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string n;
    int x,y;
    x=0;
    cin>> n;
    y=n.length();
    for(int i=0; i<y; i++){
        if(n[i]=='4'|| n[i]=='7'){
            x++;
        }
    }
    if(x==4 || x==7) cout << "YES";
    else cout << "NO";
 
 
    return 0;
}
