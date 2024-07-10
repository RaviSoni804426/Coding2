#include <bits/stdc++.h>
using namespace std;

// int main() {
// 	int a,b;
// 	cin>>a>>b;
// 	if((2*b)>a){
// 	cout<<"No";}
// 	else{
// 	    cout<<"Yes";
// 	}

// }

struct Spell {
    int volatility;
    int strength;
};

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        vector<Spell> spells(N);
        for (int i = 0; i < N; i++) {
            cin >> spells[i].volatility >> spells[i].strength;
        }

        sort(spells.begin(), spells.end(), [](const Spell& a, const Spell& b) {
            return a.volatility * b.strength > b.volatility * a.strength;
        });

        int max_power = 0;
        for (int i = 0; i < N - 1; i++) {
            int power = spells[i].volatility * spells[i+1].strength + spells[i+1].volatility * spells[i].strength;
            max_power = max(max_power, power);
        }

        cout << max_power << endl;
    }

    return 0;
}