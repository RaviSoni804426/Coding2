#include<bits/stdc++.h>
using namespace std;
int main(){
    int size=5;
    int arr[size]={1,2,3,4,8};
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
       int count=0;  
        for(int j=0;j<i;j++){
            if(arr[j]%2!=0) count++;
        }
    }
    vector<int>result;
    int k=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            result[k]=arr[i];
            k++;
        }
    }
    cout<<result[k];
    
}

    