#include<iostream>
#include<map>
using namespace std;
int main()
{
    //in map the key are in sorted order
    map<int,int> m;
    m[1]=30;
    m[2]=20;
    m[3]=10;
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }


    return 0;
}