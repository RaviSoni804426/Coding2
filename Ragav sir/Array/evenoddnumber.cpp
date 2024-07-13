#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={7, 2, 9, 4, 6, 1, 3, 8, 5};
    int i=0;
    int j=8;
    while(i<j){
        if(arr[i]%2==0){
            i++;
        }
        else if(arr[j]%2==1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
        }
    }
    for(int i=0;i<9;i++){
        cout << arr[i];
    }

}
