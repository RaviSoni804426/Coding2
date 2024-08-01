#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int key, height, size;
    Node* left, * right;
    Node(int k) : key(k), height(1), size(1), left(nullptr), right(nullptr) {}
};

class AVLTree {
public:
    Node* root;

    AVLTree() : root(nullptr) {}

    int height(Node* node) {
        return node ? node->height : 0;
    }

    int size(Node* node) {
        return node ? node->size : 0;
    }

    int order_of_key(Node* node, int k) {
        if (!node) return 0;
        if (k == node->key) return size(node->left);
        if (k < node->key) return order_of_key(node->left, k);
        return size(node->left) + 1 + order_of_key(node->right, k);
    }

    Node* get_by_order(Node* node, int k) {
        if (!node) return nullptr;
        int left_size = size(node->left);
        if (k <= left_size) return get_by_order(node->left, k);
        if (k == left_size + 1) return node;
        return get_by_order(node->right, k - left_size - 1);
    }

    Node* rightRotate(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = max(height(y->left), height(y->right)) + 1;
        x->height = max(height(x->left), height(x->right)) + 1;

        y->size = size(y->left) + size(y->right) + 1;
        x->size = size(x->left) + size(x->right) + 1;

        return x;
    }

    Node* leftRotate(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;

        y->left = x;
        x->right = T2;

        x->height = max(height(x->left), height(x->right)) + 1;
        y->height = max(height(y->left), height(y->right)) + 1;

        x->size = size(x->left) + size(x->right) + 1;
        y->size = size(y->left) + size(y->right) + 1;

        return y;
    }

    int getBalance(Node* node) {
        if (!node) return 0;
        return height(node->left) - height(node->right);
    }

    Node* insert(Node* node, int key) {
        if (!node) return new Node(key);

        if (key < node->key)
            node->left = insert(node->left, key);
        else if (key > node->key)
            node->right = insert(node->right, key);
        else
            return node;

        node->height = 1 + max(height(node->left), height(node->right));
        node->size = size(node->left) + size(node->right) + 1;

        int balance = getBalance(node);

        if (balance > 1 && key < node->left->key)
            return rightRotate(node);

        if (balance < -1 && key > node->right->key)
            return leftRotate(node);

        if (balance > 1 && key > node->left->key) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        if (balance < -1 && key < node->right->key) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr)
            current = current->left;
        return current;
    }

    Node* remove(Node* root, int key) {
        if (!root) return root;

        if (key < root->key)
            root->left = remove(root->left, key);
        else if (key > root->key)
            root->right = remove(root->right, key);
        else {
            if ((root->left == nullptr) || (root->right == nullptr)) {
                Node* temp = root->left ? root->left : root->right;

                if (temp == nullptr) {
                    temp = root;
                    root = nullptr;
                } else
                    *root = *temp;

                delete temp;
            } else {
                Node* temp = minValueNode(root->right);
                root->key = temp->key;
                root->right = remove(root->right, temp->key);
            }
        }

        if (root == nullptr) return root;

        root->height = 1 + max(height(root->left), height(root->right));
        root->size = size(root->left) + size(root->right) + 1;

        int balance = getBalance(root);

        if (balance > 1 && getBalance(root->left) >= 0)
            return rightRotate(root);

        if (balance > 1 && getBalance(root->left) < 0) {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }

        if (balance < -1 && getBalance(root->right) <= 0)
            return leftRotate(root);

        if (balance < -1 && getBalance(root->right) > 0) {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }

        return root;
    }

    bool find(Node* node, int key) {
        if (!node) return false;
        if (key == node->key) return true;
        if (key < node->key) return find(node->left, key);
        return find(node->right, key);
    }
};

int main() {
    AVLTree tree;

    tree.root = tree.insert(tree.root, 10);
    tree.root = tree.insert(tree.root, 20);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 40);
    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 25);

    cout << "Find 25: " << (tree.find(tree.root, 25) ? "Found" : "Not Found") << endl;
    cout << "Order of 25: " << tree.order_of_key(tree.root, 25) << endl;
    cout << "Get by order 3: " << (tree.get_by_order(tree.root, 3) ? tree.get_by_order(tree.root, 3)->key : -1) << endl;

    tree.root = tree.remove(tree.root, 20);
    cout << "Find 20 after removal: " << (tree.find(tree.root, 20) ? "Found" : "Not Found") << endl;

    return 0;
}