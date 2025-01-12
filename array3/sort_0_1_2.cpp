#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //if in coding round then two pass soluntion like 
    //first count 0,1,2 then fill the array
    //for interview 
    //three pointer method
    //using one pass solution using constant extra space
    //DUTCH FLAG ALGORITHM
    vector<int>v{2,0,2,1,1,0};
    int lo=0;
    int hi=v.size()-1;
    int mid=0;
    while(mid<=hi){
        if(v[mid]==2)swap(v[mid],v[hi--]);
        if(v[mid]==0)swap(v[mid++],v[lo++]);
        else  mid++;
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}