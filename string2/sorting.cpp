#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="abdcfe";
    sort(s.begin(),s.end());
    cout<<s;
    //if we give space then the space in going to first after sorting
    //because of ascii character
 return 0;
}