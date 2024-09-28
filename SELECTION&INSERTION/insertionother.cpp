// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[]={3,1,4,5,2};
//     int n=5;
//     int j;
//     for(int i=1;i<n;i++){
//         j=i;
//         //while(arr[j]<arr[j-1])
//         while(j>=1 && arr[j]<arr[j-1]){
//             if(arr[j]>=arr[j-1]) break;
//             if(arr[j]<arr[j-1]){
//                 swap(arr[j],arr[j-1]);
//                j--;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,23,21,45,43,23,76,98,65,34,56,12,11,1,2,3,7,6,54};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"before sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i= 1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            if(arr[j]>=arr[j-1])break;
            if(arr[j]<arr[j-1]){
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
    }
    cout<<"after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}