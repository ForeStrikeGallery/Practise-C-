/*
	Dijkstra's single source shortest paths problem

	Given a graph and a source vertex in graph, find 
	shortest paths from source to all vertices in the given graph.
	
	Algorithm
	----------


	We first create a shortest path tree with the source vertex as root. 
	We maintain two sets. One which contains nodes which are in the shotest
	path tree, and the other containing all the excluding vertices. 

	In every step, we find the a vertex in the exclusing set which has
	a minimum distance from the source.

	1) Create a set sptSet, which has the shortest paths to each vertex
	   finalised. Initially this set is empty.

	2) Assign distance value to each vertex in the graph, initiase all 
	   values except the source node to be of infinite dist from the 
	   source. Assign distance value of source vertex to be 0, so that 
	   it will be selected first in our algorithm.

	3) While sptSet doesn't include all the vertices, do
		a) Pick vertex not in sptSet which has minimum value
		b) include u in sptSet
		c) update distance of all adjacent nodes of u, to do that 
		   iterate through all the adjacent vertices, and if the 
		   sum of distance value at u plus egde length u-v, update
		   dist of v as u + len(u-v). 



*/


#include<bits/stdc++.h>

int minDistance(int dist[], int sptSet[]) {

	int min = INT_MAX, min_index;
	for (int v=0; v<V; v++) {
		if (!sptSet[v] && dist[v] <= min) {
			min = dist[v];
			min_index = v;
		}
	}

	return min_index;
}

void Dijkstra(int graph[V][V], int src) {


	int dist[V];
	bool sptSet[V];

	// Initialise all the values in dist to be INIFINITE
	for (int i=0; i<V; i++) {\
		dist[i] = INT_MAX;
		sptSet[i] = false;
	}

	dist[src] = 0;
	sptSet[src] = true;


	// Finding shortest paths
	// Iterating till V-1 since src is already included in 
	// dist array
	for (int i=0; i< V-1; i++) {
		int u = minDistance(dist, sptSet);
		sptSet[u] = true;
		for (int v=0; v<V; v++) {
			if (!sptSet && graph[V][V] && dist[u] != INT_MAX 
									   && dist[u] + graph[u][v] < dist[v]) {
				dist[v] = dist[u] + graph[u][v];
			}
		}

	}
}






