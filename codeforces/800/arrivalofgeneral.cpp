#include<bits/stdc++.h>
using namespace std;
int n , a[110] , k = 101 , b = 0 , x , y , t = 0;
 
int main(){
	cin >> n;
	for (int i = 0 ; i < n ; ++ i){
		cin >> a[i];
		if (a[i] > b){
			b = a[i];
			x = i;
		}
		if (a[i] <= k){
			k = a[i];
			y = i;
		}
	}
	if (x > y) t --;
	t += x - 1;
	t += n - y;
	cout << t;
	return 0;
}