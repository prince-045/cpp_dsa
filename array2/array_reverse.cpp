#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // first method
    vector<int>v{1,2,3,4,5};
    vector<int>v2;
    // for(int i=v.size()-1;i>=0;i--){
    //     v2.push_back(v[i]);
    // }
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }
    //second method
    for(int i=0;i<v.size();i++){
        int j=v.size()-1-i;
        v2.push_back(v[j]);
    }
     for(int i=0;i<v.size();i++){
        cout<<v2[i]<<" ";
    }

 return 0;
}