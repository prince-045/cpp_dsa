//rotate the given array 'a' by k steps,where k is non-negative.
//note:K can be greater than n as well where n is the size of array.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   

    vector<int>v{1,6,2,3,7,4};
    int k=2;
    // for taking input of k then do int k=k%v.size()
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}