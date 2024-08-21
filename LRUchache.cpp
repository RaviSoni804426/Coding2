#include<bits/stdc++.h>
using namespace std;
class LRUCache{
     public:
     int key;
     int val;
     node * next;
     node * prev;
     node(int _key, int _val){
         key = _key;
         val = _val;
     }
};




