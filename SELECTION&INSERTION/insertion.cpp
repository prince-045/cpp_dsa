// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={5,4,3,2,1};
//     int n=5;
//     for(int i=1;i<n;i++)
//     {
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0&&arr[j]>key){
//             arr[j+1]=arr[j]; 
//             j--;
//         }
//         arr[j+1]=key;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//  return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,3,2,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"before sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
   }

   cout<<"after sorting: ";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   

 return 0;
}