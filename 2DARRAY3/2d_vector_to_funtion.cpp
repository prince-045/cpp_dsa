//for vector pass by referance---> vector<vector<int>>& v change in that array
//for pass by value ---> vector<vector<int>> v make new vector
#include<iostream>
#include<vector>
using namespace std;
void change_vector(vector<vector<int>>& v){
    v[0][0]=100;

}
int main()
{
    vector<vector<int>> v{{1,2,3},{4,5},{6,7,8,9,10}};
    cout<<v[0][0]<<" ";
    change_vector(v);
    cout<<v[0][0];

 return 0;
}