#include<iostream>
#include<unordered_set>
//#include<set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5); 
    s.insert(5);//it is duplicaTE ELEMENT SO IT IS NOT CONSIDER IN SIZE AND WHILE PRINTING IT IS ALSO NOT PRINTED.
    //for printing() we use for each loop
    s.erase(5);//it will remove all 5
    cout<< s.size()<<endl;
    for(int ele:s){
        cout<<ele<<" ";
    }
//if we want to check the value is exist in the set or not
    int target=4;
    //s.find->1) it searches in the set,and if not found then
    // it returns the last element.

    if(s.find(target)!=s.end()){//target exists
    //if(s.find(tagrget)==s.end())//target is not exists
        cout<<"\nthe element is exist in the set";
    }



    return 0;
}