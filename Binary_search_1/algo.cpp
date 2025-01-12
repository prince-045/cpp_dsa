#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{12,34,32,45,65,78,90,12,36,76,68,97};
    sort(v.begin(),v.end());
    int target=97;
    int hi=v.size()-1;
    int lo=0;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(v[mid]==target){
            cout<<v[mid]<<" : found in vector";
            break;
        }
        else if(v[mid]>target)hi=mid-1;
        else lo=mid+1;
    }
    return 0;
}