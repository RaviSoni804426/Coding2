#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        long long N, M;
        cin >> N >> M;
        
        long long remainder = M % N;
        // If remainder is 0, no need to make or destroy any cookies
        if (remainder == 0) {
            cout << 0 << endl;}
            else if(N>M){
                cout<<N-M<<endl;
            }

        else {
            // Calculate the minimum time needed
            long long time_to_add = N - remainder;
            long long time_to_remove = remainder;
            cout << min(time_to_add, time_to_remove) << endl;
        }

    }
}
    






    