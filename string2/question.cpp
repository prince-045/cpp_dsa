//input a string and 
//return the number of times the neighbouring character are different from each other
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="abbcdeffghh";
    //  cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s.length()==1) break;
        if(i==0){ if(s[i]!=s[i+1])count++;}
        else if(i==(s.length()-1)){
            if(s[i]!=s[i-1]) count++;
        } 
        else if(s[i-1]!=s[i]&&s[i]!=s[i+1]) count++;
    }
    cout<<count;
 return 0;
}
