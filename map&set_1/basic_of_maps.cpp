#include<iostream>
#include<unordered_map>
using namespace std;
/*
    virtually we assume
    class pair{
        string first;
        int second;
    }
*/
int main()
{
    /*we can also make pair class instead of this.
    this is inbuilt we can make pair by using this.
    this is inbuilt in c++.
    pair<int,int>p;
    p.first=1;
    p.second=2;
    cout<<p.first<<" "<<p.second;//it will print 1
    */

    unordered_map<string,int>m;
    /*
    take value in pair key,value
    it means it recieve one pair
    m.insert("prince",98) this will give error
    so we can first make pair then insert pair in map
    */
   pair<string,int>p1;
    p1.first="prince";
    p1.second=79;
    m.insert(p1);//this is correct way of doing this work
    pair<string,int>p2;
    p2.first="pilu";
    p2.second=70;
    m.insert(p2);
    pair<string,int>p3;
    p3.first="pila";
    p3.second=80;
    m.insert(p3);
    //we can use auto instead of pair<string,int>
    for(pair<string,int> ele:m){
       cout<<ele.first<<" "<<ele .second<<endl; 
    }
    return 0;
}