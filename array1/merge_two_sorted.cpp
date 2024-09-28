#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a1{1,4,5,8};
    vector<int>a2{2,3,6,7,10,11,12 };
    int i=0;
    int j=0;
    int k=0;
    int n=a1.size()+a2.size();
        vector<int>a3(n);
    while(k<n){
        if(a1[i]<=a2[j]){
            a3[k]=a1[i];
            k++;
            i++;
        }
        else if(a1[i]>=a2[j]){
            a3[k]=a2[j];
            j++;
            k++;
        }
        else if(i>=a1.size()&&j<a2.size()){
            a3[k]=a2[j];
            k++;
            j++;
        }
        else if(j>=a2.size()&&i<a1.size()){
            a3[k]=a1[i];
            k++;
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a3[i]<<" ";
    }

 return 0;
}