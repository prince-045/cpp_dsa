// #include<bits/stdc++.h>
// using namespace std;
// void insertion(int a[],int n){

//     for(int i=1;i<=n;i++){
//         int j=i-1;
//         int key=a[i];
//         while(j>=0&&a[j]>key){
//            a[j+1]=a[j];
//            j--; 
//         }
//         a[j+1]=key;
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }

// }
// int main()
// {
//     int arr[]={13,45,65,43,21,13,67,98};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     insertion(arr,n);
//  return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size()&&j<b.size()){
//         if(a[i]>b[j])res[k++]=b[j++];
//         else res[k++]=a[i++];
//     }
//     if(i==a.size()){
//         while(j!=b.size())res[k++]=b[j++];
//     }
//     if(j==b.size()){
//         while(i!=a.size())res[k++]=a[i++];
//     }
   
// }
// void mergesort(vector<int>&v){
//     if(v.size()<=1)return;
//     int n=v.size();
//     int n1=n/2;
//     int n2=n-(n/2);
//     vector<int>a(n1),b(n2);
//     for(int i=0;i<n1;i++){
//         a[i]=v[i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=v[i+n1];
//     }
//     mergesort(a);
//     mergesort(b);
//     merge(a,b,v);
//     a.clear();
//     b.clear();
// }
// int main()
// {
//     vector<int>v{1,2,34,32,123,456,543,21};
//     mergesort(v);
//      for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//  return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void insertion(vector<int>&a){
    int n = a.size();
    for(int i = 1; i < n; i++){
        int key = a[i];
        int j = i - 1; // Declare j here
        while(j >= 0 && a[j] > key){ // j should be checked for >= 0
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    vector<int>v{2, 34, 32, 12, 54, 67};
    insertion(v);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
