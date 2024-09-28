#include<iostream>
#include<limits.h>
using namespace std;
#define V 4
#define INF 99999
void printsolution(int dist[V][V]);
void disktras(int dist[V][V]){
    int i,j,k;
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][j]>(dist[i][k]+dist[k][j])&& dist[i][k]!=INF)dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
    printsolution(dist);
}
void printsolution(int dist[V][V]){
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(dist[i][j]==INF) cout<<"INF"<<"   ";
            else cout<<dist[i][j]<<"   ";
        }
        cout<<endl;
    }
}

int main()
{
    int v[V][V]={{0,5,INF,10},
                    {INF,0,3,INF},
                    {INF,INF,0,1},
                    {INF,INF,INF,0}};
                    disktras(v);

    return 0;
}