#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
 int val;
 Node* left;
 Node* right;
 Node(int val){
    this->val=val;
    this->right=NULL;
    this->left=NULL;
 }
};
void displayTree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);

}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);

    a->right=b;
    a->left=c;
    b->left=d;
    b->right=e;
    displayTree(a);

}