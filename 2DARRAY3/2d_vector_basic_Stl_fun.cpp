#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>v>{{1,2,3},{4,5},{6,7,8,9,10}};
    vector<int>a{11,12,13};
    v.push_back(a);//{{1,2,3},{4,5},{6,7,8,9,10},{11,12,13}}
    
 return 0;
}