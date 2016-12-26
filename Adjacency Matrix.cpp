#include<bits/stdc++.h>
using namespace std;

struct Graph{
	int V;
	int E;
	int **Adj; 	// since we need a 2D Matrix
};


//Code to create a graph with adj Matrix
struct Graph *adjMatrixOfGraph(){
	int i,u,v;
	struct Graph *G = new Graph();
	if(!G){
		cout<<"Memory Error";
		return NULL;
	}
	
	cout<<"Number of Vertices";
	cin>>G->V;
	cout<<"Number of Edges";
	cin>>G->E;
	
	G->Adj = (int**)malloc(sizeof(G->V));
	
	for(u = 0; u < G->V; u++){
		G->Adj[u] = (int*) malloc(sizeof(G->V));
		for(v = 0; v < G->V; v++){
			G->Adj[u][v] = 0;
		}
	}
	for(i = 0; i < G->E; i++){
		//Read an edge
		cin>>u>>v;
		G->Adj[u][v] = 1;
		G->Adj[v][u] = 1;
	}
	
	return G;
}

int main(){
	struct Graph * g;
	g = adjMatrixOfGraph();
	
	if(g){
		for(int i = 0; i < g->V; i++){
			for(int j = 0; j < g->V; j++)
				cout<<g->Adj[i][j]<<" ";
		cout<<"\n";
		}
	}
	
	return 0;
}
