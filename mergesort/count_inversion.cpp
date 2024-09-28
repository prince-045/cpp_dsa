// two element of an array a,a[i]a dn a[j]from an inversion if a[i]>a[j] and 
// i<j.giveen an array of integers.find the inversion count in the array.
#include<iostream>
#include<vector>
using namespace std;

int count1 = 0;  // Global inversion count
//not impressed for interviewer

// Function to count inversions between two halves
int inversion(vector<int>& a, vector<int>& b) {
    int i = 0;
    int j = 0;
    int invCount = 0;  // Local inversion count
    while (i < a.size() && j < b.size()) {
        if (a[i] > b[j]) {
            invCount += a.size() - i;  // All elements from i to end of 'a' are greater
            j++;
        } else {
            i++;
        }
    }
    return invCount;
}

// Merge function to merge two sorted arrays
void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = 0;  // Index for 'a'
    int j = 0;  // Index for 'b'
    int k = 0;  // Index for merged 'res'
    
    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    
    // If any elements remain in 'a'
    while (i < a.size()) res[k++] = a[i++];
    
    // If any elements remain in 'b'
    while (j < b.size()) res[k++] = b[j++];
}

// Divide and conquer using merge sort to count inversions
void using_merge(vector<int>& v) {
     // int count=0;for not using global variable
    int n = v.size();
    if (n == 1) return;  // Base case, single element is already sorted
    
    int n1 = n / 2;
    int n2 = n - n1;
    
    vector<int> v1(n1), v2(n2);
    
    // Copying elements to sub-arrays
    for (int i = 0; i < n1; i++) {
        v1[i] = v[i];
    }
    for (int i = 0; i < n2; i++) {
        v2[i] = v[i + n1];
    }
    
    // Recursively sort both halves
    //count+=using_merge(v1)
    //count+=using_merge(v2)
    //for not uisng global variable and please make function data type to integer
    using_merge(v1);
    using_merge(v2);
    
    // Count inversions between two halves
    count1 += inversion(v1, v2);
    
    
    // Merge the sorted halves
    merge(v1, v2, v);
}

int main() {
    int arr[] = {5, 1, 3, 0, 4, 9, 6};  // Number of inversions: 4+1+1+1 = 7
    int n1 = sizeof(arr) / sizeof(arr[0]);
    vector<int> a(arr, arr + n1);
    
    // Reset the global inversion count before each run
    count1 = 0;
    
    // Call merge sort and count inversions
    using_merge(a);
    
    cout << "Number of inversions: " << count1 << endl;  // Output the inversion count
    
    return 0;
}
