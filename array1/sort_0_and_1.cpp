#include<iostream>
using namespace std;
int main()
{
    int a[8]={1,-2,3,-4,-5,6,8,-9};
    int i=0;
    int j=7;
    while(j>i){
         if(a[j]<0) j--;
        else if(a[i]>0)i++;
         else {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
             j--;
            i++;
        }
       
    }

    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
 return 0;
}