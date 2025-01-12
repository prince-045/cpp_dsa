#include <iostream>
using namespace std;

// Define a node structure
struct Node {
    int data;           // Data part
    Node* left;         // Pointer to left child or inorder predecessor
    Node* right;        // Pointer to right child or inorder successor
    bool leftThread;    // True if left pointer is a thread
    bool rightThread;   // True if right pointer is a thread
    
    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = right = nullptr;
        leftThread = rightThread = true;  // Initially, both left and right are threads
    }
};

// Function to insert a node into the double threaded binary tree
Node* insert(Node* root, int key) {
    Node* newNode = new Node(key);

    // If tree is empty, return the new node as the root
    if (root == nullptr) {
        return newNode;
    }

    Node* parent = nullptr;
    Node* current = root;

    // Traverse the tree to find the correct position for insertion
    while (current != nullptr) {
        parent = current;

        if (key < current->data) {
            if (current->leftThread) {
                break;
            }
            current = current->left;
        } else {
            if (current->rightThread) {
                break;
            }
            current = current->right;
        }
    }

    // Insert the new node as left or right child
    if (key < parent->data) {
        newNode->left = parent->left;      // Set the predecessor
        newNode->right = parent;           // Set the successor
        parent->leftThread = false;        // Parent's left is now a child
        parent->left = newNode;            // Link newNode as left child
    } else {
        newNode->right = parent->right;    // Set the successor
        newNode->left = parent;            // Set the predecessor
        parent->rightThread = false;       // Parent's right is now a child
        parent->right = newNode;           // Link newNode as right child
    }

    return root;
}

// Function to perform inorder traversal of the double threaded binary tree
void inorder(Node* root) {
    if (root == nullptr) return;

    Node* current = root;

    // Find the leftmost node
    while (!current->leftThread) {
        current = current->left;
    }

    // Traverse the tree using threads                                                                                                          
    while (current != nullptr) {
        // Print the current node's data
        cout << current->data << " ";

        // If the right pointer is a thread, move to the inorder successor
        if (current->rightThread) {
            current = current->right;
        } else {
            // Otherwise, find the leftmost node in the right subtree
            current = current->right;
            while (current != nullptr && !current->leftThread) {
                current = current->left;
            }
        }
    }
}

int main() {
    // Create an empty double threaded binary tree
    Node* root = nullptr;

    // Insert nodes into the double threaded binary tree
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 25);
    root = insert(root, 35);

    // Perform inorder traversal of the double threaded binary tree
    cout << "Inorder Traversal of Double Threaded Binary Tree: ";
    inorder(root);
    cout << endl;

    return 0;
}
