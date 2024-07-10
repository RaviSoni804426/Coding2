#include<bits/stdc++.h>
using namespace std;
void display (queue<int>&q){
  int n=q.size();
  for(int i=1;i<=n;i++){
    int x=q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
  }
  cout<<endl;
}
