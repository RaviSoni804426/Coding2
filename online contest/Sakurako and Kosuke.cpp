#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int current_position = 0;
        int move_number = 1;
        bool sakurako_turn = true;

        while (abs(current_position) <= n) {
            if (sakurako_turn) {
                current_position -= (2 * move_number - 1); 
            } else {
                current_position += (2 * move_number - 1); 
            
            if (abs(current_position) > n) {
                if (sakurako_turn) {
                    cout << "Sakurako" << endl;
                } else {
                    cout << "Kosuke" << endl;
                }
                break;
            }
            
            sakurako_turn = !sakurako_turn; 
            move_number++;
        }
    }
    
    return 0;
}
}
if i want to learn more and more then 
