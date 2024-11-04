#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>v(5);// 0 0 0 0 0
    // vector<int>v1(5,2);//2 2 2 2 2
    // int arr[3][4]
    vector<vector<int>>v(3,vector<int>(4));//3 rows and 4 colums
    vector<vector<int>>v1(3,vector<int>(4,2));//3 rows and 4 colums initally filled with 2
    cout<<v.size()<<" ";//for printing total no. of row 
    cout<<v[0].size()<<" ";//for printing  total no of colum 
     
    return 0;
}