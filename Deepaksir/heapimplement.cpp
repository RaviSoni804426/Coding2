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
        int idx=sz;
        while(idx!=0 && a[idx]<a[parent(idx)]){
            swap(a[idx],a[parent(idx)]);
            idx=parent(idx);
        }
        }
    void pop(){
        if(sz==0) return;
        swap(a[0],a[sz-1]);
        sz--;
        int idx=0;
        while(true){
            int lc=leftchild(idx);
            int rc=rightchild(idx);
            int smallest=idx;
            if(lc<sz && a[smallest]>a[lc]) smallest=lc;
            if(rc<sz && a[smallest]>a[rc]) smallest=rc;
            if(smallest!=idx){
                swap(a[idx],a[smallest]);
                idx=smallest;
            }
            else break;
           
        }
        int top(){
            if(isEmpty()){
                cout<<"Heap is empty\n";
                return -1;}
                
            }
            return a[0];

        }
        bool isEmpty(){
            return size()==0;
        }
        int size(){
            return sz;
        }
        void display(){ 
            for(int i=0;i<sz;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
    
    }
}
this is he implemet of the code in of heap 

