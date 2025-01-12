#include<iostream>
#include<vector>
using namespace std;
vector<int>runningSum(vector<int>&nums){
    // vector<int>c;
    // c.push_back(nums[0]);
    // for(int i=1;i<nums.size();i++){
    //     int x=c[i-1]+nums[i];
    //     c.push_back(x);
    // }
    // return c;
    //other method to save space
    for(int i=1;i<nums.size();i++){
        nums[i]=nums[i]+nums[i-1];
    }
    return nums;
}
int main()
{
    vector<int>v{1,2,3,4};
    vector<int>x;
    x=runningSum(v);
 for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
 return 0;
}