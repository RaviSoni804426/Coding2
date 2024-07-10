#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
// void display(Node*head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
    
// }
// int main(){
//     Node* a = new Node(10);
//     Node* b = new Node(20);
//     Node* c = new Node(30);
//     a->next = b;
//     b->next = c;
//     display(a);

//     // cout<<a->next
//     // Node* temp = a;
//     // while(temp!=NULL){
// }
// void display(Node*head){
//     cout<<head->val;
//     if(head->next!=NULL){
// }
//     display(head->next);
    
    class Linkedlist{
        Node* head;
        Node* tail;
        int size;
        Linkedlist(){
            head = NULL;
            tail = NULL;
            size = 0;
        }
    }
    int main(){
        Linkedlist ll;
        ll.insertAtHead(10);
        l1.insertAtHead(20);
        ll.insertAtHead(30);
        l1insertAtHead(40);
       // cout<<l1.getSize()<<endl;
        // cout<<l1.getAt(1)<<endl;
        // l1.removeAt(1);
        // l1.display();
        // cout<<l1.getSize()<<endl;
        // l1.reverse();
        // l1.display();
        // cout<<l1.search(20)<<endl;
        // cout<<l1.search(50)<<endl;
        // cout<<l1.getMiddle()<<endl;
        // l1.deleteList();
        // l1.display();
        // cout<<l1.getSize()<<endl;
        // Node* head2 = new Node(5);
        // Node* b = new Node(15);
        // Node* c = new Node(25);
        // head2->next = b;
        // b->next = c;
        // l1.merge(head2);
        // l1.display();
        // cout<<l1
        
        
        // Node* head3 = new Node(1);
        // Node* b1 = new Node(2);
        // Node* c1 = new Node(3);
        // head3->next = b1;
        // b1->next = c1;
        // Node* head4 = new Node(4);
        // Node* b2 = new Node(5);
        // Node* c2 = new Node(6);
        // head4->next = b2;
        // b2->next = c2;
        // Node* result = l1.mergeTwoLists(head3, head4);
        // l1.display(result);
        // cout<<l1.getSize()<<endl;
        // l1.removeDuplicates();
        // l1.display();
        // cout<<l1.getSize()<<endl;
        // l1.sortList();
        // l1.display();
        // cout<<l1.getSize()<<endl;
        // l1.deleteNode(b1);
        // l1.display();
        // cout<<l1.getSize()<<endl;
        // cout<<l1.getKthFromEnd(2)<<endl;
        // cout<<l1.isPalindrome()<<endl;
        // Node* head5 = new Node(1);
        // Node* b3 = new Node(2);
        // Node* c3 = new Node(2);
        // head5->next = b3;
        // b3->next = c3;
        // c3->next = b3;
        // cout<<l1.hasCycle(head5)<<endl;
        // l1.
    }
// void test () {
    // Linkedlist ll;
    // ll.insertAtHead(10);
    // ll.insertAtHead(20);
    // ll.insertAtHead(30);
    // ll.insertAtHead(40);
    // ll.insertAtHead(50);
    // ll.display();
    // cout << "Size: " << ll.getSize() << endl;
    // cout << "Get at index 2: " << ll.getAt(2) << endl;
    // ll.removeAt(2);
    // ll.display();
    // cout << "Size after removing at index 2: " << ll.getSize() << endl;
    // ll.reverse();
    // ll.display();
    // cout << "Size after reversing: " << ll.getSize() << endl;
    // cout << "Search for 30: " << (ll.search(30) ? "Found" : "Not found") << endl;
    // cout << "Search for 60: 
    // thia is the best and
    how to delete node in linkedlist
    void deleteAtIndx(unsigned int){
        if(head == NULL || index >= size){
            return;
        }
        Node* temp = head;
        if(index == 0){
            head = temp->next;
            delete temp;
            size--;
            return;
        }
        for(unsigned int i = 0; i < index - 1 && temp!= NULL; i++){
            temp = temp->next;
        }
        if(temp == NULL || temp->next == NULL){
            return;
        }
        Node* nextNode = temp->next->next;
        delete temp->next;
        temp->next = nextNode;
        size--;
    }