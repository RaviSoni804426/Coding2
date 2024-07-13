#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int n,a,b,x,y;
    cin >>n;
    x=0;
    y=0;
    for (int i=0;i<n;i++){
        cin>> a>>b;
        x=x+b-a;
        if(x>y){
            y=x;
        }
 
    }
    cout<< y;
    return 0;
}