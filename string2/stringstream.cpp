//given a sentence,
//split every single word of the sentence and print in a new line
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    string s="prince  is a collage student";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
        }
    return 0;
}