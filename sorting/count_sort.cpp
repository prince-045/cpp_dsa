// #include <iostream>
// #include <limits.h> // Use limits.h for INT_MIN
// using namespace std;

// int maximum(int a[], int n) {
//     int maxx = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         maxx = max(maxx, a[i]);
//     }
//     return maxx;
// }

// void count_sort(int a[], int n) { // Add 'void' as return type
//     int maxi = maximum(a, n);
//     int c[maxi + 1] = {0}; // Initialize count array

//     // Populate the count array
//     for (int i = 0; i < n; i++) {
//         c[a[i]]++; // Increment count of each element
//     }

//     // Rebuild the sorted array
//     int j = 0;
//     for (int i = 0; i <= maxi; i++) {
//         while (c[i] > 0) {
//             a[j++] = i; // Store the index (value) in sorted order
//             c[i]--; // Decrease the count
//         }
//     }
// }

// int main() {
//     int a[] = {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};
//     int n = sizeof(a) / sizeof(a[0]);
//     count_sort(a, n);
    
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxi(int a[],int n){
    int m=INT_MIN;
    for(int i=0;i<n;i++){
        m=max(m,a[i]);
    }
    return m;
}
void count_sort(int a[],int n){

   int m= maxi(a,n);
   int c[m+1]={0};
   for(int i=0;i<n;i++){
        c[a[i]]++;
   }
   int j=0;
   
   for(int i=0;i<=m;i++){
    while(c[i]>0){
        a[j++]=i;
        c[i]--;
    }
   }
   for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}
int main() {
    int a[] = {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};

    int n = sizeof(a) / sizeof(a[0]);
    count_sort(a, n);

    
    return 0;
}
