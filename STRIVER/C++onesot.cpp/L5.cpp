// int count(int n){
//     int cnt=0;
//     while(n>0){
//         cnt=cnt+1;
//         n=n/10;
//     }
//     return cnt;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int revnum=0;
    while(n>0){
        int ld=n%10;
        revnum=revnum*10+ld;
    }
    cout<<revnum;
}
int i=0;
