#include<bits/stdc++.h>
using namespace std;

// int countAlternatingGroups(vector<int>& colors) {
//     int n = colors.size();
//     int count = 1;

//     for (int i = 1; i < n; i++) {
//         // Check if the current tile and the previous tile have alternating colors
//         if ((colors[i] == 0 && colors[i - 1] == 1) || (colors[i] == 1 && colors[i - 1] == 0)) {
//             // If they do, check if the next tile has the same color as the current tile
//             if (i + 1 < n && colors[i] == colors[i + 1]) {
//                 // If it does, increment the count of alternating groups
//                 count++;
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> colors(n);

//     for (int i = 0; i < n; i++) {
//         cin >> colors[i];
//     }

//     cout << countAlternatingGroups(colors) << endl;

//     return 0;
// }





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

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    
}

int main() {
