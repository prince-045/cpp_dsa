//check if array can be partitioned into 2 continous arrays of equal sum.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{0,1,2,3,4,0,2};
    for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==v[v.size()-1]-v[i]){//2*v[i]==v[v.size()-1]
            cout<<"index is "<<i;
            break;
        }
        else continue;
    }
 return 0;
}