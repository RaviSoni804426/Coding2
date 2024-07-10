#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
for (i=0;i<=n;i++){
    //space
    for(int j=0;i<n;i++){
        cout<<" ";

    }
     //star
     for (int j=0;j<2*i+1;j++){
        cout<<"*";
     }
    for(int j=0;i<n;i++){
        cout<<" ";
    }
    cout<<endl;

}
}

