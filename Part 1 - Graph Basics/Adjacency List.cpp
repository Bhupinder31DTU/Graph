#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<list<pair<int,int> > > graph){
	
	int len = graph.size();
	for(int i = 0; i < len; i++){
		cout<<i<<" -> ";
		list<pair<int,int> >::iterator it = graph[i].begin();
		for(; it != graph[i].end(); it++){
			cout<<it->first <<" => "<<it->second<<" -> ";
		}
		cout<<"NULL\n";
	}
}

int main(){
	int v,e;
	cout<<"Enter Number of vertex and edges ";
	cin>>v>>e;
	
	vector<list<pair<int,int> > > adj(v);
	
	for(int i = 0; i < e; i++){
		int src,dest,wei;
		cout<<"Enter source , destination and Weight ";
		cin>>src>>dest>>wei;
		
		adj[src].push_back(make_pair(dest,wei));
	}
	
	printGraph(adj);
	
	return 0;
}
