//given n string consing of digits from 0 to 9.return the maximum number present in string
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    vector<string>s{"0123","0023","456","00812","940","2901"};
    vector<int>v(s.size(),0);
    for(int i=0;i<v.size();i++){
        v[i]=stoi(s[i]);
    }
    sort(v.begin(),v.end());
    cout<<"max number is : "<<v[v.size()-1];
    return 0;
}