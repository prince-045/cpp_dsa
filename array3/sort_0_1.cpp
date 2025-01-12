#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{0,1,1,0,0,1,0,0,0,0,0,0,0,0,0};
    // //method 1 two pass method
    // int noz=0;
    // int noo=0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==0)noz++;
    //     else noo++;
    // }
    //     for(int i=0;i<v.size();i++){
    //         if(i<noz) v[i]=0;
    //         else v[i]=1;
    //     }
    //     for(int i=0;i<v.size();i++)
    //     {
    //         cout<<v[i]<<" ";
    //     }

    //two pointer method
    int i=0;
    int j=v.size()-1;
    for(int i=0;i<v.size();i++){
        while(i<=j){
        if(v[i]==0)i++;
        else if(v[j]==1)j--;
        else swap(v[i],v[j]);
    }
}
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}