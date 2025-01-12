//given two string s and t ,return nture if t is an anagram of s,and false otherwise.
//input : s=physicswallah,t=wallahphysics
//output: yes
//anagram meaning rearrangement of character qnd making new string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s="physicswallah";
    string t="wallahphysic";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i=0;i<t.length();i++){
        if(s[i]==t[i])continue;
        else{
            cout<<"not anagram";
            break;
        }
    }

    return 0;
}