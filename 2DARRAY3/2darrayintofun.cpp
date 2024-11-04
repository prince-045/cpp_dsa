//while catch the argument from function call it
//is neccesary to assign size of the 2darray
//void change(int arr[][]) it will give error it is running for 1d array
//for 2d array (int arr[m][n]) it is correct syntax


#include<iostream>
using namespace std;
void change(int a[3][3]){
    a[0][0]=100;
    
}
int main()
{
     
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<a[0][0];
    change(a);
    cout<<a[0][0];
   
 return 0;
}