
#include<iostream>
using namespace std;
int main()
{
    int a[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int minr=0;
    int maxr=3;
    int minc=0;
    int maxc=4;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int i=minc;i<=maxc;i++){
            cout<<a[minr][i]<<" ";
        }
        minr++;
        if(minr > maxr || minc > maxc) break;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        if(minr > maxr || minc > maxc) break;
        //left
        for(int i=maxc;i>=minc;i--){
            cout<<a[maxr][i]<<" ";
        }
        maxr--;
        if(minr > maxr || minc > maxc) break;
        //up
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
    }

    return 0;
}
