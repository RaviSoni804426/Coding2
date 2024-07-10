// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr(5,1);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;
string l(string s) {
    int n = s.size();
    string sortedS = s;
    sort(sortedS.begin(), sortedS.end());

    string result = "";
    
    for (int i = 0; i < n; i++) {
        if (sortedS[i] == sortedS[i+1]) {
            result += sortedS[i];
            i++;
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    cout << l(s) << std::endl;
    

    return 0;
}