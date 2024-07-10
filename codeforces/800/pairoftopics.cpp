#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i,j;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int, int>> t(n);
        for(i=0;i<n;i++){
            cin>>t[i].first;
        }
        for(i=0;i<n;i++){
            cin>>t[i].second;
        }
        sort(t.begin(), t.end(), [](pair<int, int> a, pair<int, int> b){
            return a.first + a.second > b.first + b.second;
        });
        long long int count = 0;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(t[i].first + t[j].first > t[i].second + t[j].second){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}