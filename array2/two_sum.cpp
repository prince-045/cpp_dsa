#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x;
    cout<<"enter target: ";
    cin>>x;
    vector<int>a;
    int n;
    cout<<"enter array size";
    cin>>n;
    cout<<"enter element";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        a.push_back(q);
    }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==x){
                    cout<<"("<<i<<" , "<<j<<")"<<"\t";
                }
            }
        }
 return 0;
}