#include <iostream>
#include <cassert>

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
private:
    Node* head;
    int size;

public:
    SinglyLinkedList() : head(nullptr), size(0) {}

    ~SinglyLinkedList() {
        clear();
    }

    void clear() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        size = 0;
    }

    void insert(int index, int element) {
        assert(index >= 0 && index <= size);
        Node* newNode = new Node{element, nullptr};
        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* prev = getNodeAt(index - 1);
            newNode->next = prev->next;
            prev->next = newNode;
        }
        size++;
    }

    void deleteElement(int index) {
        assert(index >= 0 && index < size);
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* prev = getNodeAt(index - 1);
            Node* temp = prev->next;
            prev->next = temp->next;
            delete temp;
        }
        size--;
    }

    int getSize() const {
        return size;
    }

    bool isEmpty() const {
        return size == 0;
    }

    void rotate(int k) {
        assert(k >= 0 && k < size);
        int steps = k % size;
        if (steps == 0) return;
        Node* newHead = getNodeAt(size - steps);
        Node* temp = newHead->next;
        newHead->next = nullptr;
        tail()->next = head;
        head = temp;
    }

    void reverse() {
        Node* prev = nullptr;
        Node* curr = head;
        Node* next;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void append(int element) {
        Node* newNode = new Node{element, nullptr};
        if (isEmpty()) {
            head = newNode;
        } else {
            tail()->next = newNode;
        }
        size++;
    }

    void prepend(int element) {
        Node* newNode = new Node{element, head};
        head = newNode;
        size++;
    }

    void merge(SinglyLinkedList& other) {
        if (other.isEmpty()) return;
        if (isEmpty()) {
            head = other.head;
        } else {
            tail()->next = other.head;
        }
        size += other.size;
        other.clear();
    }

    void interleave(SinglyLinkedList& other) {
        if (other.isEmpty()) return;
        Node* curr = head;
        Node* otherHead = other.head;
        while (curr != nullptr && otherHead != nullptr) {
            Node* next = curr->next;
            Node* otherNext = otherHead->next;
            curr->next = otherHead;
            otherHead->next = next;
            curr = next;
            otherHead = otherNext;
        }
        if (curr != nullptr) {
            tail()->next = otherHead;
        } else {
            head = otherHead;
        }
        size += other.size;
        other.clear();
    }

    int getMiddle() const {
        Node* slow = head;
        Node* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
       