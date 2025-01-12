#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int prev[n];
    int next[n];
    int max=arr[0];
    prev[0]=-1;
    //prev greatest element
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(arr[i]>max)max=arr[i];
    }
    //next greater element
    next[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(max<arr[i]) max=arr[i];
    }
 return 0;
}