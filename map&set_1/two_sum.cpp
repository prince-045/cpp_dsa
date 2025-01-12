#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{3,3};
    int target=6;
    vector<int>ans;
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++){
        int rem=target-v[i];
        if(m.find(rem)!=m.end()){
           ans.push_back(m[rem]);
           ans.push_back(i); 
        }
        else m[v[i]]=i;  
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}