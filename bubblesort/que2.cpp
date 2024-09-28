//push zeroes to end wheile maintaining tyhe relative order of other elements
 
 // arr 5 0 1 2 0 0 4 0 3
 // arr 5 3 1 2 4 0 0 0 0 //worst sorting by two pointer
 //we need this type of result
 // 5 1 2 4 3 0 0 0 0
 #include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={5,0,1,2,0,0,4,0,3};
    int n=9;
    for(int i=0;i<n-1;i++){
        //traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){//swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                //inbuilt function   swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}