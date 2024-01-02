#include<bits/stdc++.h>
using namespace std;

#define V 5

int minKey(int key[],bool mstset[]){
    int mini = INT_MAX;
    int minidx;
    for (int v = 0; v < V; v++)
		if (mstset[v] == false && key[v] < mini)
			mini = key[v], minidx = v;

	return minidx;
}

void printMST(int parent[], int graph[V][V])
{
	cout << "Edge \tWeight\n";
	for (int i = 1; i < V; i++)
		cout << parent[i] << " - " << i << " \t"
			<< graph[i][parent[i]] << " \n";
}

void primMst(int graph[V][V]){
    int parent[V];
    int key[V];
    bool mstset[V];

    for(int i=0;i<V;i++){
        key[i]=INT_MAX;
        mstset[i]=false;
    }
    key[0]=0;
    parent[0]=0;
    for(int cnt=0;cnt<V;cnt++){
        int u = minKey(key,mstset);
        mstset[u]=true;

        for(int v=0;v<V;v++){
            if (graph[u][v] && mstset[v] == false
				&& graph[u][v] < key[v])
				parent[v] = u, key[v] = graph[u][v];
        }
    }
    printMST(parent, graph);

}

int main(){
    int graph[V][V] = { { 0, 2, 0, 6, 0 },
						{ 2, 0, 3, 8, 5 },
						{ 0, 3, 0, 0, 7 },
						{ 6, 8, 0, 0, 9 },
						{ 0, 5, 7, 9, 0 } };

	// Print the solution
	// printMST(graph);
    primMst(graph);

	return 0;
}