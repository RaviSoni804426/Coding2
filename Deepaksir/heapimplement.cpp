#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    vector<int>a;
    int sz=0;
    int parent(int x){
        return (x-1)/2;
    }
    int leftchild(int x){
        return 2*x+1;
    }
    int rightchild(int x){
        return 2*x+2;
    }
    void push(int val){
        a.push_back(val);
        sz++;
        int idx=sz-1;
        while(idx>0 && a[idx]<a[(idx-1)/2]){
            swap(a[idx],a[(idx-1)/2]);
            idx=(idx-1)/2;
        }
    void pop(){
        if(sz==0) return;
        swap(a[0],a[sz-1]);
        sz--;
        int idx=0;
        while(true){
            int left=2*idx+1;
            int right=2*idx+2;
            int minidx=idx;
            if(left<sz && a[left]<a[minidx]) minidx=left;
            if(right<sz && a[right]<a[minidx]) minidx=right;
            if(minidx==idx) break;
            swap(a[idx],a[minidx]);
            idx=minidx;
        }
        int top{
            return a[sz];

        }
        bool isEmpty(){
            return size()==0;
        }
        int size(){
            return sz;
        }
    }


}