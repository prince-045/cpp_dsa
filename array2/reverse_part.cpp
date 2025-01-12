#include<iostream>
#include<vector>
using namespace std;
void reverse_part(int i,int j,vector<int>&v){
    while(i<=j)swap(v[i++],v[j--]);
}
int main()
{
    vector<int>v{1,2,3,4,5};
    reverse_part(0,2,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
         return 0;
}