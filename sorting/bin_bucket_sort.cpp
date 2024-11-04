#include <iostream>
#include <limits.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void Insert(Node*& head, int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

int Delete(Node*& head) {
    if (!head) return -1; // Assuming -1 indicates an empty list
    Node* temp = head;
    int value = temp->data;
    head = head->next;
    delete temp;
    return value;
}

int maxi(int a[], int n) {
    int m = INT_MIN;
    for (int i = 0; i < n; i++) {
        m = max(m, a[i]);
    }
    return m;
}

void bin_bucket(int a[], int n) {
    int m = maxi(a, n);
    Node** bins = new Node*[m + 1];
    for (int i = 0; i <= m; i++) {
        bins[i] = NULL;
    }
    for (int i = 0; i < n; i++) {
        Insert(bins[a[i]], a[i]);
    }
    int j = 0;
    for (int i = 0; i <= m; i++) {
        while (bins[i] != NULL) {
            a[j++] = Delete(bins[i]);
        }
    }
    delete[] bins; // Free allocated memory for bins
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int a[] = {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};
    int n = sizeof(a) / sizeof(a[0]);
    bin_bucket(a, n); 

    return 0;
}
