#include<bits/stdc++.h>
using namespace std;
int a[6][6] , x , y;
 
int p(int n){
	if (n < 0) return (n * (-1));
	return n;
}
 
int main(){
	for (int i = 1 ; i < 6 ; i++){
		for (int j = 1 ; j < 6 ; j++){
			cin >> a[i][j];
			if (a[i][j]){
				x = i;
				y = j;
			}
		}
	}
	int k = p(3-x) + p(3-y);
	cout << k;
	return 0;
}
