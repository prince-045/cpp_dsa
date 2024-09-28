// . Write a function which accepts a 2D array of integers and its size as arguments and displays the

// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

#include<iostream>
using namespace std;
int main()
{
    int arr[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==2 || j==2){
                cout<<arr[i][j]<<" ";
            }
         
        }
    }
 return 0;
}