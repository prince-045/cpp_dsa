//input n strings and write a program to find the longest common prefix string of all the string    
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //lexographically:=means ke ascii value mujab ave
    vector<string>v{"flower","flow","flowght"};
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    int n=v.size();
    string first=v[0];
    string last=v[n-1];
    string s="";
    for(int i=0;i<min(first.length(),last.length());i++){
        if(first[i]==last[i])s+=first[i];
        else break;
    }
    cout<<s;

    return 0;
}