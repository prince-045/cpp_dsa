//  Write a program to rotate the matrix by 90 degrees anti-clockwise
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    int  a[3][3]={1,2,3,4,5,6,7,8,9};
    //first we take transpose
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i<=j)
        swap(a[i][j],a[j][i]);
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
             swap(a[i][j],a[n-i-1][j]);
        }
    }

     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}