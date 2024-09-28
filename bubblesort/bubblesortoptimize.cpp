#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={5,4,6,3,2,1};
    int n=6;
   
    for(int i=0;i<n-1;i++){
         bool flag=true;
        //traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){//swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
                //inbuilt function   swap(arr[j],arr[j+1]);
            }
            
        }
        if(flag==true)//swap didn't happened
        {
            break;  
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}