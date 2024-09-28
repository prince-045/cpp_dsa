#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={5,3,1,4,2};
    int n=5;
    for(int ele:arr){
        cout<<ele<<" ";
    }
        cout<<endl;
        //selection sort
        for(int i=0;i<n-1;i++)
        {
            int min=10000;//any big value
            int mindx=-1;
            //minimum element calcultion in orange box
            for(int j=i;j<n;j++){
                    if(arr[j]<min){
                        min=arr[j];
                        mindx=j;
                    }

            }
            swap(arr[i],arr[mindx]);
        }
           
           for(int ele:arr){
             cout<<ele<<" ";
    }
    return 0;
}