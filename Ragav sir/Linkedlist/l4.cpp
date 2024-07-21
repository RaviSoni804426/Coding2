#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
    void insert(Node* node, int key){
        if(node == NULL)
            node = new Node(key);
        else if(key < node->data)
            insert(node->left, key);
        else
            insert(node->right, key);
    
}