// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    // int a;
    // cin>>a;
    // if(a%2==0){
    //     cout<<"Yes"<<endl;}
    // else{
    //     cout<<"No";
    
    // }
    // }
#include <iostream>

using namespace std;

int main(){
    int w;
    cin >> w;

    if (w % 2 == 0)
        cout << "YES";
    else if (w % 4 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

