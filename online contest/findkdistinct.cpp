// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         cout<<a+b<<endl;
//       int d=a*c;
//       int e=b*c;
//     }
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;

       
        vector<pair<int, int>> points;

        
        for (int i = 0; i < k; ++i) {
            points.push_back({xc + i, yc+i});
        }

       
        for (auto point : points) {
            cout << point.first << " " << point.second << endl;
        }
    }
    
    return 0;
}
