#include <iostream>
using namespace std;

void shell_sort(int a[], int n) {
    int gap, j, i;
    for (gap = n / 2; gap > 0; gap /= 2) {  // Allow gap of 1 in the final iteration
        for (i = gap; i < n; i++) {
            int temp = a[i];
            j = i - gap;
            while (j >= 0 && a[j] > temp) {  // Correct comparison and include j = 0
                a[j + gap] = a[j];
                j -= gap;  // Correctly decrement j by gap
            }
            a[j + gap] = temp;  // Place temp in the correct position
        }
    }
}

int main() {
    int a[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    int n = sizeof(a) / sizeof(a[0]);  // Calculate size of the array
    shell_sort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
