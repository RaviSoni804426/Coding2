// #include<bits/stdc++.h>
// using namespace std;
// // struct Node{
// //     int value;
// //     Node* next;
// //     Node(int value){
// //         this->value = value;
// //         this->next = NULL;
// //     }
// // };
// // int main(){
// //     Node a(10);
// //     Node b(20);
// //    Node c(30);
// //     a.next = &b;
// //     b.next = &c;
// //     c.next=NULL;
// //     Node temp=a;
// //     while(1){
// //         cout<<temp.value<<" ";
// //         if(temp.next==NULL) break;
// //         temp=*(temp.next);
// //     }
    

// // }

// class Node{
//     public:
//     int value;
//     Node* next;
//     Node(int value){
//         this->value = value;
//         this->next = NULL;
//     }
// };
// class Linkedlist{
//     Node* head;
//     Node* tail;
//     int size;
//     Linkedlist(){
//         head=NULL;
//         tail=NULL;
//         size=0;
//     }
//     void insertAtBeginning(int value){
//         Node* newNode=new Node(value);
//         if(head==NULL){
//             head=newNode;
//             tail=newNode;
//         }
//         else{
//             newNode->next=head;
//             head=newNode;
//         }
//         size++;
//     }
//     void insertAtEnd(int value){
//         Node* temp=new Node(value);
//         if(size==0) head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }
//     void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->value<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };
// int main(){
//  Linkedlist l1;
//  l1.inserAtEnd(10);
//  l1.inserAtEnd(20);
//  l1.inserAtEnd(30);
//  l1.display();
//  l1.insertAtBeginning(5);
//  l1.display();




// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;
 
}
