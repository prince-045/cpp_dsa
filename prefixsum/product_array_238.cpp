//without using devision operation
//algo that runs on o(n)
#include<iostream>
#include<vector>
using namespace std;
// vector<int>ProduxtExceptSelf(vector<int>&nums){
//      int n=nums.size();
//      int product=1;
//      int p2=1;
//      int noz=0;
//      for(int i=0;i<nums.size();i++){
//         if(nums[i]==0)noz++;
//         product*=nums[i];
//         if(nums[i]!=0)p2*=nums[i];
//      }
//         if(noz>1)p2=0;
//      for(int i=0;i<nums.size();i++){
//         if(nums[i]==0)nums[i]=p2;
//         else nums[i]=product/nums[i];
//      }
//      return nums;
// }

// vector<int>ProductExceptSelf(vector<int>&nums){
//     int n=nums.size();
//      //using prefix product method//and suffix product
//     //we make 2 vector
//     //i can done by 1 vector also 
//     vector<int>sp(n);
//     vector<int>ans(n);
//     vector<int>pp(n);
//     int p=nums[0];
//     pp[0]=1;
//     for(int i=1;i<nums.size();i++){
//         //prefix product array
//         pp[i]=p;
//         p*=nums[i];
//     }
//     sp[nums.size()-1]=1;
//     p=nums[nums.size()-1];
//     for(int i=nums.size()-2;i>=0;i--){
//     sp[i]=p;
//     p*=nums[i];
//     }
//     //how to do with two array:-simply do multiplication with sux to prefix array

//     for(int i=0;i<nums.size();i++){
//         ans[i]=pp[i]*sp[i];
//     }
//     return ans;
// }


vector<int>ProductExceptSelf(vector<int>&nums){
    int n=nums.size();
    //only using one array
    //vector<int>sp(n);
   // vector<int>ans(n);
    vector<int>pp(n);
    int p=nums[0];
    pp[0]=1;
    for(int i=1;i<nums.size();i++){
        //prefix product array
        pp[i]=p;
        p*=nums[i];
    }
    p=nums[n-1];
    for(int i=n-2;i>=0;i--){
        pp[i]*=p;
        p*=nums[i];
    }
    return pp;
    
}
int main()
{
    vector<int>x;
    vector<int>v{1,2,3,4};
    x=ProductExceptSelf(v);
    for(int i=0;i<v.size();i++){cout<<x[i]<<" ";}
    return 0;
}
