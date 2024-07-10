#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Binary Search Tree class
class BST {
private:
    Node* root;

    // Helper function for inserting a node
    Node* insert(Node* node, int data) {
        if (node == nullptr) {
            return new Node(data);
        }
        if (data < node->data) {
            node->left = insert(node->left, data);
        } else if (data > node->data) {
            node->right = insert(node->right, data);
        }
        return node;
    }

    // Helper function for searching a node
    bool search(Node* node, int data) const {
        if (node == nullptr) {
            return false;
        }
        if (data == node->data) {
            return true;
        } else if (data < node->data) {
            return search(node->left, data);
        } else {
            return search(node->right, data);
        }
    }

    // Helper function for finding the minimum value node
    Node* findMin(Node* node) const {
        while (node && node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    // Helper function for deleting a node
    Node* deleteNode(Node* node, int data) {
        if (node == nullptr) {
            return node;
        }
        if (data < node->data) {
            node->left = deleteNode(node->left, data);
        } else if (data > node->data) {
            node->right = deleteNode(node->right, data);
        } else {
            // Node with only one child or no child
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            // Node with two children: Get the inorder successor (smallest in the right subtree)
            Node* temp = findMin(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }
    

    // Helper functions for tree traversal
    void inorder(Node* node) const {
        if (node != nullptr) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    void preorder(Node* node) const {
        if (node != nullptr) {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    void postorder(Node* node) const {
        if (node != nullptr) {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }

public:
    BST() : root(nullptr) {}

    // Insert a node
    void insert(int data) {
        root = insert(root, data);
    }

    // Search for a node
    bool search(int data) const {
        return search(root, data);
    }

    // Delete a node
    void deleteNode(int data) {
        root = deleteNode(root, data);
    }

    // Inorder traversal
    void inorder() const {
        inorder(root);
        cout << endl;
    }

    // Preorder traversal
    void preorder() const {
        preorder(root);
        cout << endl;
    }

    // Postorder traversal
    void postorder() const {
        postorder(root);
        cout << endl;
    }
};

int main() {
    BST bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    cout << "Inorder traversal: ";
    bst.inorder();

    cout << "Preorder traversal: ";
    bst.preorder();

    cout << "Postorder traversal: ";
    bst.postorder();

    // cout << "Search 40: " << (bst.search(40) ? "Found" : "Not Found") << endl;
    // cout << "Search 25: " << (bst.search(25) ? "Found" : "Not Found") << endl;

    // bst.deleteNode(20);
    // cout << "Inorder traversal after deleting 20: ";
    // bst.inorder();

    // bst.deleteNode(30);
    // cout << "Inorder traversal after deleting 30: ";
    // bst.inorder();

    // bst.deleteNode(50);
    // cout << "Inorder traversal after deleting 50: ";
    // bst.inorder();

    return 0;
}