//sort a string in decreasing order of value associated after removal of values smaller than x
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="AZYZXBYDXJK";
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
        sort(str.begin(),str.end());
         cout<<str;
 return 0;
}