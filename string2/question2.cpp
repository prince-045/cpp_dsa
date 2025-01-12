//given a sentence 'str',return the word that is occuring most number of 
//times in that sentence
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string str="prince is a collage student.he is a a a good boy";
    stringstream ss(str);
    vector<string>v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());//so reapeated words ek sathe avi jay.
    int count=1;
    int maxcount=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1])count++;
        else count=1;
        maxcount=max(maxcount,count);
    }
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1])count++;
        else count=1;
        if(count==maxcount)cout<<v[i]<<endl;
    }


    return 0;
}