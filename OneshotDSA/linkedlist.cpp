#include<bits/stdc++.h>
using namespace std;
// struct Node{
//     int value;
//     Node* next;
//     Node(int value){
//         this->value = value;
//         this->next = NULL;
//     }
// };
// int main(){
//     Node a(10);
//     Node b(20);
//    Node c(30);
//     a.next = &b;
//     b.next = &c;
//     c.next=NULL;
//     Node temp=a;
//     while(1){
//         cout<<temp.value<<" ";
//         if(temp.next==NULL) break;
//         temp=*(temp.next);
//     }
    

// }

class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
int main(){
    Node* a=new Node(4);
    Node* b=new Node(3);
    Node* c=new Node(2);
    a->next=b;
    b->next=c;
    cout<<a->value<<" ";
    
}

