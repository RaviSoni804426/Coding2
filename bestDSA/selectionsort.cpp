#include<bits/stdc++.h>
using namespace std;
int main(){
for (int i=1;i<n;i++){
    int j=1;
    while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j], arr[j-1]);
        j--;
    }
}


}
