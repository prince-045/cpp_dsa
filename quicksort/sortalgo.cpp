#include<iostream>
#include<algorithm>
using namespace std;

void quicksort(int arr[], int lo, int hi) {
    if (lo >= hi) return; 

    int pivot = arr[lo];
    int i = lo + 1;
    int j = hi;

    while (i <= j) {
        while (i <= hi && arr[i] <= pivot) i++;
        while (j > lo && arr[j] > pivot) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[lo], arr[j]);

    quicksort(arr, lo, j - 1);
    quicksort(arr, j + 1, hi);
}

int main() {
    int arr[] = {5, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}