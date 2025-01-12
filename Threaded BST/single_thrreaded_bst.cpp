#include <iostream>
using namespace std;

// Define a node structure
struct Node {
    int data;           // Data part
    Node* left;         // Pointer to left child
    Node* right;        // Pointer to right child
    bool isThreaded;    // True if the right pointer is a thread (i.e., it points to the inorder successor)
    
    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
        isThreaded = false;  // Initially, a node is not threaded
    }
};

// Function to insert a node into the binary threaded tree
Node* insert(Node* root, int key) {
    // Create a new node to be inserted
    Node* newNode = new Node(key);

    // If tree is empty, the new node becomes the root
    if (root == nullptr) {
        return newNode;
    }

    // Find the correct position for the new node
    Node* parent = nullptr;
    Node* current = root;

    while (current != nullptr) {
        // If the node is threaded, break the loop
        if (current->isThreaded) {
            break;
        }

        parent = current;

        // Move to the left subtree if the key is smaller
        if (key < current->data) {
            current = current->left;
        } 
        // Move to the right subtree if the key is larger
        else {
            current = current->right;
        }
    }

    // Insert newNode as left child if key is smaller than parent node's data
    if (key < parent->data) {
        parent->left = newNode;
        newNode->right = parent;
        newNode->isThreaded = true;  // Create a threaded link
    }
    // Insert newNode as right child
    else {
        if (parent->isThreaded) {
            newNode->right = parent->right;  // Maintain the thread link
            newNode->isThreaded = true;
            parent->isThreaded = false;  // Parent is no longer threaded
        }
        parent->right = newNode;
    }

    return root;
}

// Function to perform inorder traversal of the threaded binary tree
void inorder(Node* root) {
    // Start with the leftmost node
    Node* current = root;

    // Find the leftmost node in the tree
    while (current->left != nullptr) {
        current = current->left;
    }

    // Traverse the tree in inorder
    while (current != nullptr) {
        // Print the data of the current node
        cout << current->data << " ";

        // If the current node has a thread, move to the inorder successor
        if (current->isThreaded) {
            current = current->right;
        } 
        // Otherwise, move to the leftmost node in the right subtree
        else {
            current = current->right;
            while (current != nullptr && current->left != nullptr) {
                current = current->left;
            }
        }
    }
}

int main() {
    // Create an empty threaded binary tree
    Node* root = nullptr;

    // Insert nodes into the threaded binary tree
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 25);
    root = insert(root, 35);

    // Perform inorder traversal of the threaded binary tree
    cout << "Inorder Traversal of Threaded Binary Tree: ";
    inorder(root);
    cout << endl;

    return 0;
}
