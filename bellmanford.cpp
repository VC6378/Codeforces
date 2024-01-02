#include<bits/stdc++.h>
using namespace std;


void bellford(int graph[][3],int V,int E,int src){
    int dis[V];
    for(int i=0;i<V;i++){
        dis[i]=INT_MAX;
    }
    dis[src]=0;

}

int main(){
    int V=5;
    int E=8;
    int graph[][3] = { { 0, 1, -1 }, { 0, 2, 4 },
					{ 1, 2, 3 }, { 1, 3, 2 },
					{ 1, 4, 2 }, { 3, 2, 5 },
					{ 3, 1, 1 }, { 4, 3, -3 } };

    bellford(graph,V,E,0);
    return 0;
}