#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to get the maximum value in the array
int getMax(int a[], int n) {
    int maxVal = a[0];
    for (int i = 1; i < n; i++) {
        maxVal = max(maxVal, a[i]);
    }
    return maxVal;
}

// Function to perform counting sort based on a specific digit
void countingSort(int a[], int n, int exp) {
    vector<int> output(n); // Output array
    int count[10] = {0};    // Count array for digits 0-9

    // Count occurrences of each digit
    for (int i = 0; i < n; i++) {
        count[(a[i] / exp) % 10]++;
    }

    // Change count[i] so that count[i] contains the actual position of this digit in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }

    // Copy the output array to a[] so that a[] contains sorted numbers
    for (int i = 0; i < n; i++) {
        a[i] = output[i];
    }
}

// Main radix sort function
void radixSort(int a[], int n) {
    // Find the maximum number to know the number of digits
    int maxVal = getMax(a, n);

    // Do counting sort for every digit
    for (int exp = 1; maxVal / exp > 0; exp *= 10) {
        countingSort(a, n, exp);
    }
}

int main() {
    int a[] = {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};
    int n = sizeof(a) / sizeof(a[0]);

    // Perform radix sort
    radixSort(a, n);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
