//give a string consiting lowercase wnglish alphabets.print the character that is occuring most number of times
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s="princeec";
   vector<int>arr(26,0);
    for(int i=0;i<s.length();i++){
       char ch=s[i];
       int ascii=(int)ch;
       arr[ascii-97]++; 
    }

    int max=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max)max=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max){
            cout<<(char)(i+97)<<" "<<max<<endl;
        }
    }
    return 0;
}