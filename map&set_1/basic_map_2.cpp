#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    //we can insert element in map like this also instead of 
    //creating pair
    m["prince"]=90;
    m["pilu"]=32;
    m["pila"]=45;
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    //for deleting
    m.erase("prince");//here we only give key name
    //for finding element in map
    if(m.find("pilu")!=m.end())cout<<"present";
    else cout<<"absent";
 return 0;
}