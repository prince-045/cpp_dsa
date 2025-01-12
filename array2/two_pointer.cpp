//for reversing the array by using two pointer

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5};
    int i=0;
    int j=v.size()-1;
    while(j>=i){
        swap(v[i++],v[j--]);
    }
    for(int x=0;x<v.size();x++){
        cout<<v[x]<<" ";
    }
 return 0;
}