#include <iostream>
using namespace std;

// Define the structure for a tree node
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Function to insert nodes in level order to create a binary tree
TreeNode* insertLevelOrder(int arr[], TreeNode* root, int i, int n) {
    if (i < n) {
        TreeNode* temp = new TreeNode(arr[i]);
        root = temp;

        // Insert left child
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);

        // Insert right child
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

// Inorder traversal (Left, Root, Right)
void inOrder(TreeNode* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->value << " ";
        inOrder(root->right);
    }
}

// Preorder traversal (Root, Left, Right)
void preOrder(TreeNode* root) {
    if (root != nullptr) {
        cout << root->value << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Postorder traversal (Left, Right, Root)
void postOrder(TreeNode* root) {
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->value << " ";
    }
}

int main() {
    // Example array to create the binary tree
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create the root of the binary tree
    TreeNode* root = insertLevelOrder(arr, nullptr, 0, n);

    // Perform and display the tree traversals
    cout << "Inorder traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preOrder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}
