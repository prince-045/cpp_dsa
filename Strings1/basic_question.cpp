// input a string of length n and count all the 
// vowels in the given string
#include<iostream>
using namespace std;
int main()
{
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    cout<<"no of vowels: "<<count;
 return 0;
}