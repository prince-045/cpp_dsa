#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maximum1=INT_MIN;
    int maximum2=INT_MIN;
      int count1=0;
      int count2=0;
      int result1,result2,result;
        cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];;
    }
    for(int i=0;i<n;i+=2){
       {
            maximum1=max(maximum1,a[i]);
            count1++; 
           
        }
    }
      for(int i=1;i<n;i+=2){
       {
            maximum2=max(maximum2,a[i]);
            count2++;  
        }
    }
    

    result1=maximum1+count1;
    result2=maximum2+count2;
    result=max(result1,result2);
    cout<<result;
  
 return 0;
}