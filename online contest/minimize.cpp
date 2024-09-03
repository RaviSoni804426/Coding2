// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         cout<<(a^b);
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        
        vector<int> result(n); 

        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            
            for (int j = 0; j < row.size(); ++j) {
                if (row[j] == '#') {
                    result[n - i - 1] = j + 1; 
                    break;
                }
            }
        }

        
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int x, y, d; 
        cin >> x >> y >> d;
        int moves = 0;
        int dx = abs(x), dy = abs(y); 
        while (dx > 0 || dy > 0) {
            if (moves % 2 == 0) { 
                int jump = min(d, dx);
                dx -= jump;
            } else { 
                int jump = min(d, dy);
                dy -= jump;
            }
            moves++;
        }

        cout << moves << endl;
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){

}

