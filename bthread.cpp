#include <iostream>
using namespace std;

// Node structure for Threaded Binary Tree
struct Node {
    int data;
    Node* left;  // Left child
    Node* right; // Right child
    bool isLeftThread;  // True if left pointer is a thread (predecessor)
    bool isRightThread; // True if right pointer is a thread (successor)
};

// Helper function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    newNode->isLeftThread = true;  // Initially threads point to NULL
    newNode->isRightThread = true; // Initially threads point to NULL
    return newNode;
}

// Insert function to add nodes to the threaded binary tree
Node* insert(Node* root, int data) {
    if (!root) {
        return createNode(data);  // If the tree is empty, return a new node
    }

    Node* parent = nullptr;
    Node* current = root;

    // Traverse the tree to find the correct position for insertion
    while (current) {
        parent = current;

        if (data < current->data) {
            if (!current->isLeftThread) {
                current = current->left;  // Move left if not a thread
            } else {
                break;  // Stop at a thread
            }
        } else if (data > current->data) {
            if (!current->isRightThread) {
                current = current->right;  // Move right if not a thread
            } else {
                break;  // Stop at a thread
            }
        } else {
            // If data is already in the tree, no need to insert
            return root;
        }
    }

    // Create the new node
    Node* newNode = createNode(data);

    // Insert the node at the correct position
    if (data < parent->data) {
        newNode->left = parent->left;  // Inorder predecessor
        newNode->right = parent;       // Inorder successor
        parent->isLeftThread = false;  // Update left thread
        parent->left = newNode;        // Attach new node to the left
    } else {
        newNode->right = parent->right;  // Inorder successor
        newNode->left = parent;          // Inorder predecessor
        parent->isRightThread = false;   // Update right thread
        parent->right = newNode;         // Attach new node to the right
    }

    return root;
}

// Function to find the leftmost node in a binary tree (for inorder traversal)
Node* leftmost(Node* node) {
    if (!node) return nullptr;

    while (!node->isLeftThread) {
        node = node->left;  // Move to the leftmost node
    }
    return node;
}

// Inorder traversal of a Threaded Binary Tree
void inorder(Node* root) {
    if (!root) return;

    Node* current = leftmost(root);

    while (current) {
        cout << current->data << " ";  // Visit node

        // If the current node has a right thread, go to its successor
        if (current->isRightThread) {
            current = current->right;
        } else {
            current = leftmost(current->right);  // Otherwise, go to leftmost in the right subtree
        }
    }
}

int main() {
    Node* root = nullptr;

    // Insert nodes into the threaded binary tree
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 25);
    root = insert(root, 35);

    // Perform inorder traversal
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
