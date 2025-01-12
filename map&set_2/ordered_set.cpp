#include<iostream>
#include<set>
//in this the inserting of element is in sorted order.
//inserting,deleting,finding takes O(log n)
using namespace std;
int main()
{   
    set<int>s;
    s.insert(5);
    s.insert(3);
    for(auto ele:s){
        cout<<ele<<" ";
    }
    return 0;
}