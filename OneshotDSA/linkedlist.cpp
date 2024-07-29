#include<bits/stdc++.h>
using namespace std;
   struct Node{
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
   };
   class Linkedlist{
    Node* head;
    Linkedlist(){
        head=NULL;
    }
    void insertAtbeginning(int value){
        Node* newNode=new Node(value);
        newNode->next=head;
        head=newNode;
    }
    void insertatend(int value){
        Node* newNode=new Node(value);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void deleteNode

   }